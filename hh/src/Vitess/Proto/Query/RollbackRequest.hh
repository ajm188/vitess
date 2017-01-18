<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: query.proto

namespace Vitess\Proto\Query {

  class RollbackRequest extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Vtrpc\CallerID */
    public $effective_caller_id = null;
    
    /**  @var \Vitess\Proto\Query\VTGateCallerID */
    public $immediate_caller_id = null;
    
    /**  @var \Vitess\Proto\Query\Target */
    public $target = null;
    
    /**  @var int */
    public $transaction_id = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'query.RollbackRequest');

      // OPTIONAL MESSAGE effective_caller_id = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "effective_caller_id";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Vtrpc\CallerID';
      $descriptor->addField($f);

      // OPTIONAL MESSAGE immediate_caller_id = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "immediate_caller_id";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\VTGateCallerID';
      $descriptor->addField($f);

      // OPTIONAL MESSAGE target = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "target";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\Target';
      $descriptor->addField($f);

      // OPTIONAL INT64 transaction_id = 4
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 4;
      $f->name      = "transaction_id";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <effective_caller_id> has a value
     *
     * @return boolean
     */
    public function hasEffectiveCallerId(){
      return $this->_has(1);
    }
    
    /**
     * Clear <effective_caller_id> value
     *
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function clearEffectiveCallerId(){
      return $this->_clear(1);
    }
    
    /**
     * Get <effective_caller_id> value
     *
     * @return \Vitess\Proto\Vtrpc\CallerID
     */
    public function getEffectiveCallerId(){
      return $this->_get(1);
    }
    
    /**
     * Set <effective_caller_id> value
     *
     * @param \Vitess\Proto\Vtrpc\CallerID $value
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function setEffectiveCallerId(\Vitess\Proto\Vtrpc\CallerID $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <immediate_caller_id> has a value
     *
     * @return boolean
     */
    public function hasImmediateCallerId(){
      return $this->_has(2);
    }
    
    /**
     * Clear <immediate_caller_id> value
     *
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function clearImmediateCallerId(){
      return $this->_clear(2);
    }
    
    /**
     * Get <immediate_caller_id> value
     *
     * @return \Vitess\Proto\Query\VTGateCallerID
     */
    public function getImmediateCallerId(){
      return $this->_get(2);
    }
    
    /**
     * Set <immediate_caller_id> value
     *
     * @param \Vitess\Proto\Query\VTGateCallerID $value
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function setImmediateCallerId(\Vitess\Proto\Query\VTGateCallerID $value){
      return $this->_set(2, $value);
    }
    
    /**
     * Check if <target> has a value
     *
     * @return boolean
     */
    public function hasTarget(){
      return $this->_has(3);
    }
    
    /**
     * Clear <target> value
     *
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function clearTarget(){
      return $this->_clear(3);
    }
    
    /**
     * Get <target> value
     *
     * @return \Vitess\Proto\Query\Target
     */
    public function getTarget(){
      return $this->_get(3);
    }
    
    /**
     * Set <target> value
     *
     * @param \Vitess\Proto\Query\Target $value
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function setTarget(\Vitess\Proto\Query\Target $value){
      return $this->_set(3, $value);
    }
    
    /**
     * Check if <transaction_id> has a value
     *
     * @return boolean
     */
    public function hasTransactionId(){
      return $this->_has(4);
    }
    
    /**
     * Clear <transaction_id> value
     *
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function clearTransactionId(){
      return $this->_clear(4);
    }
    
    /**
     * Get <transaction_id> value
     *
     * @return int
     */
    public function getTransactionId(){
      return $this->_get(4);
    }
    
    /**
     * Set <transaction_id> value
     *
     * @param int $value
     * @return \Vitess\Proto\Query\RollbackRequest
     */
    public function setTransactionId( $value){
      return $this->_set(4, $value);
    }
  }
}

