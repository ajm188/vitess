<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: query.proto

namespace Vitess\Proto\Query {

  class ResultExtras extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Query\EventToken */
    public $event_token = null;
    
    /**  @var boolean */
    public $fresher = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'query.ResultExtras');

      // OPTIONAL MESSAGE event_token = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "event_token";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\EventToken';
      $descriptor->addField($f);

      // OPTIONAL BOOL fresher = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "fresher";
      $f->type      = \DrSlump\Protobuf::TYPE_BOOL;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <event_token> has a value
     *
     * @return boolean
     */
    public function hasEventToken(){
      return $this->_has(1);
    }
    
    /**
     * Clear <event_token> value
     *
     * @return \Vitess\Proto\Query\ResultExtras
     */
    public function clearEventToken(){
      return $this->_clear(1);
    }
    
    /**
     * Get <event_token> value
     *
     * @return \Vitess\Proto\Query\EventToken
     */
    public function getEventToken(){
      return $this->_get(1);
    }
    
    /**
     * Set <event_token> value
     *
     * @param \Vitess\Proto\Query\EventToken $value
     * @return \Vitess\Proto\Query\ResultExtras
     */
    public function setEventToken(\Vitess\Proto\Query\EventToken $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <fresher> has a value
     *
     * @return boolean
     */
    public function hasFresher(){
      return $this->_has(2);
    }
    
    /**
     * Clear <fresher> value
     *
     * @return \Vitess\Proto\Query\ResultExtras
     */
    public function clearFresher(){
      return $this->_clear(2);
    }
    
    /**
     * Get <fresher> value
     *
     * @return boolean
     */
    public function getFresher(){
      return $this->_get(2);
    }
    
    /**
     * Set <fresher> value
     *
     * @param boolean $value
     * @return \Vitess\Proto\Query\ResultExtras
     */
    public function setFresher( $value){
      return $this->_set(2, $value);
    }
  }
}

