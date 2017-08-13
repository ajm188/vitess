/*
Copyright 2017 Google Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

// Package vtexplain analyzes a set of sql statements and returns the
// corresponding vtgate and vttablet query plans that will be executed
// on the given statements
package vtexplain

// XXX TODO:
//
// Add full grammar support for CREATE TABLE
//   - reserved vs non-reserved keywords
//   - enum type support
//   - partitioned tables
//   - length on index columns
// For DML queries handle comments to indicate whether rows exist or not
// Human-friendly and json output modes
// Options for RBR/SBR, 2PC transactions, autocommit, etc

import (
	"encoding/json"
	"fmt"
	"strings"

	log "github.com/golang/glog"

	"github.com/youtube/vitess/go/vt/sqlparser"
	"github.com/youtube/vitess/go/vt/vtgate/engine"

	querypb "github.com/youtube/vitess/go/vt/proto/query"
)

type TabletQuery struct {
	// Sql command sent to the given tablet
	Sql string

	// BindVars sent with the command
	BindVars map[string]*querypb.BindVariable

	// The actual queries executed by mysql
	MysqlQueries []string
}

func (tq *TabletQuery) MarshalJSON() ([]byte, error) {
	// Convert Bindvars to strings for nicer output
	bindVars := make(map[string]string)
	for k, v := range tq.BindVars {
		bindVars[k] = v.String()
	}

	return json.Marshal(&struct {
		Sql          string
		BindVars     map[string]string
		MysqlQueries []string
	}{
		Sql:          tq.Sql,
		BindVars:     bindVars,
		MysqlQueries: tq.MysqlQueries,
	})
}

type Plan struct {
	// original sql statement
	Sql string

	// the vtgate plan(s)
	Plans []*engine.Plan

	// list of queries / bind vars sent to each tablet
	TabletQueries map[string][]*TabletQuery
}

var executeOptions = &querypb.ExecuteOptions{
	IncludedFields: querypb.ExecuteOptions_TYPE_ONLY,
}

const (
	CELL = "explainCell"

	// currently we only use two shards -- maybe make this parameterizable?
	NUM_SHARDS = 2
)

// Sets up the fake execution environment
func Init(vSchemaStr, sqlSchema string) error {
	err := initVtgateExecutor(vSchemaStr)
	if err != nil {
		return fmt.Errorf("initVtgateExecutor: %v", err)
	}

	parsedDDLs, err := parseSchema(sqlSchema)
	if err != nil {
		return fmt.Errorf("parseSchema: %v", err)
	}

	err = initTabletEnvironment(parsedDDLs)
	if err != nil {
		return fmt.Errorf("initTabletEnvironment: %v", err)
	}

	return nil
}

func parseSchema(sqlSchema string) ([]*sqlparser.DDL, error) {
	parsedDDLs := make([]*sqlparser.DDL, 0, 16)
	for _, sql := range strings.Split(sqlSchema, ";") {
		s := sqlparser.StripLeadingComments(sql)
		s, _ = sqlparser.SplitTrailingComments(sql)
		s = strings.TrimSpace(s)
		if s == "" {
			continue
		}

		stmt, err := sqlparser.Parse(sql)
		if err != nil {
			log.Errorf("ERROR: failed to parse sql: %s, got error: %v", sql, err)
			continue
		}
		ddl, ok := stmt.(*sqlparser.DDL)
		if !ok {
			log.Infof("ignoring non-DDL statement: %s", sql)
			continue
		}
		if ddl.Action != sqlparser.CreateStr {
			log.Infof("ignoring %s table statement", ddl.Action)
			continue
		}
		if ddl.TableSpec == nil {
			log.Errorf("invalid create table statement: %s", sql)
			continue
		}
		parsedDDLs = append(parsedDDLs, ddl)
	}
	return parsedDDLs, nil
}

// Run the explain analysis on the given queries
func Run(sqlStr string) ([]*Plan, error) {
	plans := make([]*Plan, 0, 16)

	for _, sql := range strings.Split(sqlStr, ";") {
		s := strings.TrimSpace(sql)
		if s != "" {
			plan, err := GetPlan(s)
			if err != nil {
				return nil, err
			}
			plans = append(plans, plan)
		}
	}

	return plans, nil
}

func GetPlan(sql string) (*Plan, error) {
	_, err := sqlparser.Parse(sql)
	if err != nil {
		return nil, fmt.Errorf("error parsing sql: %v", err)
	}

	plans, tabletQueries, err := vtgateExecute(sql)
	if err != nil {
		return nil, fmt.Errorf("vtgateExecute: %v", err)
	}
	for _, tqs := range tabletQueries {
		for _, tq := range tqs {
			mqs, err := fakeTabletExecute(tq.Sql, tq.BindVars)
			if err != nil {
				return nil, fmt.Errorf("error in fakeTabletExecute: %v", err)
			}
			tq.MysqlQueries = mqs
		}

	}

	return &Plan{
		Sql:           sql,
		Plans:         plans,
		TabletQueries: tabletQueries,
	}, nil
}