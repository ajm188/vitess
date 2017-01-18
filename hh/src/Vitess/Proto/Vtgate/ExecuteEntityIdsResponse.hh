<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vtgate.proto

namespace Vitess\Proto\Vtgate {

  class ExecuteEntityIdsResponse extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Vtrpc\RPCError */
    public $error = null;
    
    /**  @var \Vitess\Proto\Vtgate\Session */
    public $session = null;
    
    /**  @var \Vitess\Proto\Query\QueryResult */
    public $result = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vtgate.ExecuteEntityIdsResponse');

      // OPTIONAL MESSAGE error = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "error";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Vtrpc\RPCError';
      $descriptor->addField($f);

      // OPTIONAL MESSAGE session = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "session";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Vtgate\Session';
      $descriptor->addField($f);

      // OPTIONAL MESSAGE result = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "result";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\QueryResult';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <error> has a value
     *
     * @return boolean
     */
    public function hasError(){
      return $this->_has(1);
    }
    
    /**
     * Clear <error> value
     *
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsResponse
     */
    public function clearError(){
      return $this->_clear(1);
    }
    
    /**
     * Get <error> value
     *
     * @return \Vitess\Proto\Vtrpc\RPCError
     */
    public function getError(){
      return $this->_get(1);
    }
    
    /**
     * Set <error> value
     *
     * @param \Vitess\Proto\Vtrpc\RPCError $value
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsResponse
     */
    public function setError(\Vitess\Proto\Vtrpc\RPCError $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <session> has a value
     *
     * @return boolean
     */
    public function hasSession(){
      return $this->_has(2);
    }
    
    /**
     * Clear <session> value
     *
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsResponse
     */
    public function clearSession(){
      return $this->_clear(2);
    }
    
    /**
     * Get <session> value
     *
     * @return \Vitess\Proto\Vtgate\Session
     */
    public function getSession(){
      return $this->_get(2);
    }
    
    /**
     * Set <session> value
     *
     * @param \Vitess\Proto\Vtgate\Session $value
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsResponse
     */
    public function setSession(\Vitess\Proto\Vtgate\Session $value){
      return $this->_set(2, $value);
    }
    
    /**
     * Check if <result> has a value
     *
     * @return boolean
     */
    public function hasResult(){
      return $this->_has(3);
    }
    
    /**
     * Clear <result> value
     *
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsResponse
     */
    public function clearResult(){
      return $this->_clear(3);
    }
    
    /**
     * Get <result> value
     *
     * @return \Vitess\Proto\Query\QueryResult
     */
    public function getResult(){
      return $this->_get(3);
    }
    
    /**
     * Set <result> value
     *
     * @param \Vitess\Proto\Query\QueryResult $value
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsResponse
     */
    public function setResult(\Vitess\Proto\Query\QueryResult $value){
      return $this->_set(3, $value);
    }
  }
}

