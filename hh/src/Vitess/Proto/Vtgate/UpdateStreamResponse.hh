<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vtgate.proto

namespace Vitess\Proto\Vtgate {

  class UpdateStreamResponse extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Query\StreamEvent */
    public $event = null;
    
    /**  @var int */
    public $resume_timestamp = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vtgate.UpdateStreamResponse');

      // OPTIONAL MESSAGE event = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "event";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\StreamEvent';
      $descriptor->addField($f);

      // OPTIONAL INT64 resume_timestamp = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "resume_timestamp";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
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
     * @return \Vitess\Proto\Vtgate\UpdateStreamResponse
     */
    public function clearEvent(){
      return $this->_clear(1);
    }
    
    /**
     * Get <event> value
     *
     * @return \Vitess\Proto\Query\StreamEvent
     */
    public function getEvent(){
      return $this->_get(1);
    }
    
    /**
     * Set <event> value
     *
     * @param \Vitess\Proto\Query\StreamEvent $value
     * @return \Vitess\Proto\Vtgate\UpdateStreamResponse
     */
    public function setEvent(\Vitess\Proto\Query\StreamEvent $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <resume_timestamp> has a value
     *
     * @return boolean
     */
    public function hasResumeTimestamp(){
      return $this->_has(2);
    }
    
    /**
     * Clear <resume_timestamp> value
     *
     * @return \Vitess\Proto\Vtgate\UpdateStreamResponse
     */
    public function clearResumeTimestamp(){
      return $this->_clear(2);
    }
    
    /**
     * Get <resume_timestamp> value
     *
     * @return int
     */
    public function getResumeTimestamp(){
      return $this->_get(2);
    }
    
    /**
     * Set <resume_timestamp> value
     *
     * @param int $value
     * @return \Vitess\Proto\Vtgate\UpdateStreamResponse
     */
    public function setResumeTimestamp( $value){
      return $this->_set(2, $value);
    }
  }
}

