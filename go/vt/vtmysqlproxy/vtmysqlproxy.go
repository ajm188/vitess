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

// Package vtmysqlproxy is a standalone version of the tablet server
package vtmysqlproxy

import (
	"flag"
	"fmt"

	log "github.com/golang/glog"

	"github.com/youtube/vitess/go/vt/dbconfigs"
	"github.com/youtube/vitess/go/vt/mysqlproxy"
	"github.com/youtube/vitess/go/vt/servenv"
	"github.com/youtube/vitess/go/vt/tableacl"
	"github.com/youtube/vitess/go/vt/tableacl/simpleacl"
	"github.com/youtube/vitess/go/vt/vttablet/tabletserver"
	"github.com/youtube/vitess/go/vt/vttablet/tabletserver/tabletenv"

	querypb "github.com/youtube/vitess/go/vt/proto/query"
	topodatapb "github.com/youtube/vitess/go/vt/proto/topodata"
)

var (
	mysqlProxy *mysqlproxy.Proxy
	target     = querypb.Target{
		TabletType: topodatapb.TabletType_MASTER,
		Keyspace:   "",
	}

	targetKeyspace   = flag.String("target", "", "Target keyspace name")
	normalizeQueries = flag.Bool("normalize_queries", true, "Rewrite queries with bind vars. Turn this off if the app itself sends normalized queries with bind vars.")
)

// Init initializes the proxy
func Init(dbcfgs *dbconfigs.DBConfigs, tableACLConfig string) error {
	target.Keyspace = *targetKeyspace
	log.Infof("initalizing vtmysqlproxy.Proxy for target %s", target.Keyspace)

	// creates and registers the query service
	qs := tabletserver.NewTabletServerWithNilTopoServer(tabletenv.Config)

	mysqlProxy = mysqlproxy.NewProxy(&target, qs, *normalizeQueries)

	servenv.OnRun(func() {
		qs.Register()
		addStatusParts(qs)
	})

	servenv.OnClose(func() {
		// We now leave the queryservice running during lameduck,
		// so stop it in OnClose(), after lameduck is over.
		qs.StopService()
	})

	if tableACLConfig != "" {
		// To override default simpleacl, other ACL plugins must set themselves to be default ACL factory
		tableacl.Register("simpleacl", &simpleacl.Factory{})

		// tabletacl.Init loads ACL from file if *tableACLConfig is not empty
		err := tableacl.Init(
			tableACLConfig,
			func() {
				qs.ClearQueryPlanCache()
			},
		)
		if err != nil {
			return fmt.Errorf("Failed to initialize Table ACL: %v", err)
		}
	}

	err := qs.StartService(target, *dbcfgs)
	if err != nil {
		return err
	}

	return nil
}
