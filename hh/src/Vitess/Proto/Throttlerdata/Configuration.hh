<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: throttlerdata.proto

namespace Vitess\Proto\Throttlerdata {

  class Configuration extends \DrSlump\Protobuf\Message {

    /**  @var int */
    public $target_replication_lag_sec = null;
    
    /**  @var int */
    public $max_replication_lag_sec = null;
    
    /**  @var int */
    public $initial_rate = null;
    
    /**  @var float */
    public $max_increase = null;
    
    /**  @var float */
    public $emergency_decrease = null;
    
    /**  @var int */
    public $min_duration_between_increases_sec = null;
    
    /**  @var int */
    public $max_duration_between_increases_sec = null;
    
    /**  @var int */
    public $min_duration_between_decreases_sec = null;
    
    /**  @var int */
    public $spread_backlog_across_sec = null;
    
    /**  @var int */
    public $ignore_n_slowest_replicas = null;
    
    /**  @var int */
    public $ignore_n_slowest_rdonlys = null;
    
    /**  @var int */
    public $age_bad_rate_after_sec = null;
    
    /**  @var float */
    public $bad_rate_increase = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'throttlerdata.Configuration');

      // OPTIONAL INT64 target_replication_lag_sec = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "target_replication_lag_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 max_replication_lag_sec = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "max_replication_lag_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 initial_rate = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "initial_rate";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL DOUBLE max_increase = 4
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 4;
      $f->name      = "max_increase";
      $f->type      = \DrSlump\Protobuf::TYPE_DOUBLE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL DOUBLE emergency_decrease = 5
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 5;
      $f->name      = "emergency_decrease";
      $f->type      = \DrSlump\Protobuf::TYPE_DOUBLE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 min_duration_between_increases_sec = 6
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 6;
      $f->name      = "min_duration_between_increases_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 max_duration_between_increases_sec = 7
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 7;
      $f->name      = "max_duration_between_increases_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 min_duration_between_decreases_sec = 8
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 8;
      $f->name      = "min_duration_between_decreases_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 spread_backlog_across_sec = 9
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 9;
      $f->name      = "spread_backlog_across_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT32 ignore_n_slowest_replicas = 10
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 10;
      $f->name      = "ignore_n_slowest_replicas";
      $f->type      = \DrSlump\Protobuf::TYPE_INT32;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT32 ignore_n_slowest_rdonlys = 11
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 11;
      $f->name      = "ignore_n_slowest_rdonlys";
      $f->type      = \DrSlump\Protobuf::TYPE_INT32;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 age_bad_rate_after_sec = 12
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 12;
      $f->name      = "age_bad_rate_after_sec";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL DOUBLE bad_rate_increase = 13
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 13;
      $f->name      = "bad_rate_increase";
      $f->type      = \DrSlump\Protobuf::TYPE_DOUBLE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <target_replication_lag_sec> has a value
     *
     * @return boolean
     */
    public function hasTargetReplicationLagSec(){
      return $this->_has(1);
    }
    
    /**
     * Clear <target_replication_lag_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearTargetReplicationLagSec(){
      return $this->_clear(1);
    }
    
    /**
     * Get <target_replication_lag_sec> value
     *
     * @return int
     */
    public function getTargetReplicationLagSec(){
      return $this->_get(1);
    }
    
    /**
     * Set <target_replication_lag_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setTargetReplicationLagSec( $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <max_replication_lag_sec> has a value
     *
     * @return boolean
     */
    public function hasMaxReplicationLagSec(){
      return $this->_has(2);
    }
    
    /**
     * Clear <max_replication_lag_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearMaxReplicationLagSec(){
      return $this->_clear(2);
    }
    
    /**
     * Get <max_replication_lag_sec> value
     *
     * @return int
     */
    public function getMaxReplicationLagSec(){
      return $this->_get(2);
    }
    
    /**
     * Set <max_replication_lag_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setMaxReplicationLagSec( $value){
      return $this->_set(2, $value);
    }
    
    /**
     * Check if <initial_rate> has a value
     *
     * @return boolean
     */
    public function hasInitialRate(){
      return $this->_has(3);
    }
    
    /**
     * Clear <initial_rate> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearInitialRate(){
      return $this->_clear(3);
    }
    
    /**
     * Get <initial_rate> value
     *
     * @return int
     */
    public function getInitialRate(){
      return $this->_get(3);
    }
    
    /**
     * Set <initial_rate> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setInitialRate( $value){
      return $this->_set(3, $value);
    }
    
    /**
     * Check if <max_increase> has a value
     *
     * @return boolean
     */
    public function hasMaxIncrease(){
      return $this->_has(4);
    }
    
    /**
     * Clear <max_increase> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearMaxIncrease(){
      return $this->_clear(4);
    }
    
    /**
     * Get <max_increase> value
     *
     * @return float
     */
    public function getMaxIncrease(){
      return $this->_get(4);
    }
    
    /**
     * Set <max_increase> value
     *
     * @param float $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setMaxIncrease( $value){
      return $this->_set(4, $value);
    }
    
    /**
     * Check if <emergency_decrease> has a value
     *
     * @return boolean
     */
    public function hasEmergencyDecrease(){
      return $this->_has(5);
    }
    
    /**
     * Clear <emergency_decrease> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearEmergencyDecrease(){
      return $this->_clear(5);
    }
    
    /**
     * Get <emergency_decrease> value
     *
     * @return float
     */
    public function getEmergencyDecrease(){
      return $this->_get(5);
    }
    
    /**
     * Set <emergency_decrease> value
     *
     * @param float $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setEmergencyDecrease( $value){
      return $this->_set(5, $value);
    }
    
    /**
     * Check if <min_duration_between_increases_sec> has a value
     *
     * @return boolean
     */
    public function hasMinDurationBetweenIncreasesSec(){
      return $this->_has(6);
    }
    
    /**
     * Clear <min_duration_between_increases_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearMinDurationBetweenIncreasesSec(){
      return $this->_clear(6);
    }
    
    /**
     * Get <min_duration_between_increases_sec> value
     *
     * @return int
     */
    public function getMinDurationBetweenIncreasesSec(){
      return $this->_get(6);
    }
    
    /**
     * Set <min_duration_between_increases_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setMinDurationBetweenIncreasesSec( $value){
      return $this->_set(6, $value);
    }
    
    /**
     * Check if <max_duration_between_increases_sec> has a value
     *
     * @return boolean
     */
    public function hasMaxDurationBetweenIncreasesSec(){
      return $this->_has(7);
    }
    
    /**
     * Clear <max_duration_between_increases_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearMaxDurationBetweenIncreasesSec(){
      return $this->_clear(7);
    }
    
    /**
     * Get <max_duration_between_increases_sec> value
     *
     * @return int
     */
    public function getMaxDurationBetweenIncreasesSec(){
      return $this->_get(7);
    }
    
    /**
     * Set <max_duration_between_increases_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setMaxDurationBetweenIncreasesSec( $value){
      return $this->_set(7, $value);
    }
    
    /**
     * Check if <min_duration_between_decreases_sec> has a value
     *
     * @return boolean
     */
    public function hasMinDurationBetweenDecreasesSec(){
      return $this->_has(8);
    }
    
    /**
     * Clear <min_duration_between_decreases_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearMinDurationBetweenDecreasesSec(){
      return $this->_clear(8);
    }
    
    /**
     * Get <min_duration_between_decreases_sec> value
     *
     * @return int
     */
    public function getMinDurationBetweenDecreasesSec(){
      return $this->_get(8);
    }
    
    /**
     * Set <min_duration_between_decreases_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setMinDurationBetweenDecreasesSec( $value){
      return $this->_set(8, $value);
    }
    
    /**
     * Check if <spread_backlog_across_sec> has a value
     *
     * @return boolean
     */
    public function hasSpreadBacklogAcrossSec(){
      return $this->_has(9);
    }
    
    /**
     * Clear <spread_backlog_across_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearSpreadBacklogAcrossSec(){
      return $this->_clear(9);
    }
    
    /**
     * Get <spread_backlog_across_sec> value
     *
     * @return int
     */
    public function getSpreadBacklogAcrossSec(){
      return $this->_get(9);
    }
    
    /**
     * Set <spread_backlog_across_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setSpreadBacklogAcrossSec( $value){
      return $this->_set(9, $value);
    }
    
    /**
     * Check if <ignore_n_slowest_replicas> has a value
     *
     * @return boolean
     */
    public function hasIgnoreNSlowestReplicas(){
      return $this->_has(10);
    }
    
    /**
     * Clear <ignore_n_slowest_replicas> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearIgnoreNSlowestReplicas(){
      return $this->_clear(10);
    }
    
    /**
     * Get <ignore_n_slowest_replicas> value
     *
     * @return int
     */
    public function getIgnoreNSlowestReplicas(){
      return $this->_get(10);
    }
    
    /**
     * Set <ignore_n_slowest_replicas> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setIgnoreNSlowestReplicas( $value){
      return $this->_set(10, $value);
    }
    
    /**
     * Check if <ignore_n_slowest_rdonlys> has a value
     *
     * @return boolean
     */
    public function hasIgnoreNSlowestRdonlys(){
      return $this->_has(11);
    }
    
    /**
     * Clear <ignore_n_slowest_rdonlys> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearIgnoreNSlowestRdonlys(){
      return $this->_clear(11);
    }
    
    /**
     * Get <ignore_n_slowest_rdonlys> value
     *
     * @return int
     */
    public function getIgnoreNSlowestRdonlys(){
      return $this->_get(11);
    }
    
    /**
     * Set <ignore_n_slowest_rdonlys> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setIgnoreNSlowestRdonlys( $value){
      return $this->_set(11, $value);
    }
    
    /**
     * Check if <age_bad_rate_after_sec> has a value
     *
     * @return boolean
     */
    public function hasAgeBadRateAfterSec(){
      return $this->_has(12);
    }
    
    /**
     * Clear <age_bad_rate_after_sec> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearAgeBadRateAfterSec(){
      return $this->_clear(12);
    }
    
    /**
     * Get <age_bad_rate_after_sec> value
     *
     * @return int
     */
    public function getAgeBadRateAfterSec(){
      return $this->_get(12);
    }
    
    /**
     * Set <age_bad_rate_after_sec> value
     *
     * @param int $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setAgeBadRateAfterSec( $value){
      return $this->_set(12, $value);
    }
    
    /**
     * Check if <bad_rate_increase> has a value
     *
     * @return boolean
     */
    public function hasBadRateIncrease(){
      return $this->_has(13);
    }
    
    /**
     * Clear <bad_rate_increase> value
     *
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function clearBadRateIncrease(){
      return $this->_clear(13);
    }
    
    /**
     * Get <bad_rate_increase> value
     *
     * @return float
     */
    public function getBadRateIncrease(){
      return $this->_get(13);
    }
    
    /**
     * Set <bad_rate_increase> value
     *
     * @param float $value
     * @return \Vitess\Proto\Throttlerdata\Configuration
     */
    public function setBadRateIncrease( $value){
      return $this->_set(13, $value);
    }
  }
}

