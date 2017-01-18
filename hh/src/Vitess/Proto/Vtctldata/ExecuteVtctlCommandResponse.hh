<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vtctldata.proto

namespace Vitess\Proto\Vtctldata {

  class ExecuteVtctlCommandResponse extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Logutil\Event */
    public $event = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vtctldata.ExecuteVtctlCommandResponse');

      // OPTIONAL MESSAGE event = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "event";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Logutil\Event';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <event> has a value
     *
     * @return boolean
     */
    public function hasEvent(){
      return $this->_has(1);
    }
    
    /**
     * Clear <event> value
     *
     * @return \Vitess\Proto\Vtctldata\ExecuteVtctlCommandResponse
     */
    public function clearEvent(){
      return $this->_clear(1);
    }
    
    /**
     * Get <event> value
     *
     * @return \Vitess\Proto\Logutil\Event
     */
    public function getEvent(){
      return $this->_get(1);
    }
    
    /**
     * Set <event> value
     *
     * @param \Vitess\Proto\Logutil\Event $value
     * @return \Vitess\Proto\Vtctldata\ExecuteVtctlCommandResponse
     */
    public function setEvent(\Vitess\Proto\Logutil\Event $value){
      return $this->_set(1, $value);
    }
  }
}

