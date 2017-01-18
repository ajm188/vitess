<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class StopReplicationAndGetStatusResponse extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Replicationdata\Status */
    public $status = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.StopReplicationAndGetStatusResponse');

      // OPTIONAL MESSAGE status = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "status";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Replicationdata\Status';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <status> has a value
     *
     * @return boolean
     */
    public function hasStatus(){
      return $this->_has(1);
    }
    
    /**
     * Clear <status> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\StopReplicationAndGetStatusResponse
     */
    public function clearStatus(){
      return $this->_clear(1);
    }
    
    /**
     * Get <status> value
     *
     * @return \Vitess\Proto\Replicationdata\Status
     */
    public function getStatus(){
      return $this->_get(1);
    }
    
    /**
     * Set <status> value
     *
     * @param \Vitess\Proto\Replicationdata\Status $value
     * @return \Vitess\Proto\Tabletmanagerdata\StopReplicationAndGetStatusResponse
     */
    public function setStatus(\Vitess\Proto\Replicationdata\Status $value){
      return $this->_set(1, $value);
    }
  }
}

