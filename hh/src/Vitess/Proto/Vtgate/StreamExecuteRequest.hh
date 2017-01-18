<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vtgate.proto

namespace Vitess\Proto\Vtgate {

  class StreamExecuteRequest extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Vtrpc\CallerID */
    public $caller_id = null;
    
    /**  @var \Vitess\Proto\Query\BoundQuery */
    public $query = null;
    
    /**  @var int - \Vitess\Proto\Topodata\TabletType */
    public $tablet_type = null;
    
    /**  @var string */
    public $keyspace = null;
    
    /**  @var \Vitess\Proto\Query\ExecuteOptions */
    public $options = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vtgate.StreamExecuteRequest');

      // OPTIONAL MESSAGE caller_id = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "caller_id";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Vtrpc\CallerID';
      $descriptor->addField($f);

      // OPTIONAL MESSAGE query = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "query";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\BoundQuery';
      $descriptor->addField($f);

      // OPTIONAL ENUM tablet_type = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "tablet_type";
      $f->type      = \DrSlump\Protobuf::TYPE_ENUM;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Topodata\TabletType';
      $descriptor->addField($f);

      // OPTIONAL STRING keyspace = 4
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 4;
      $f->name      = "keyspace";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL MESSAGE options = 5
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 5;
      $f->name      = "options";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\ExecuteOptions';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <caller_id> has a value
     *
     * @return boolean
     */
    public function hasCallerId(){
      return $this->_has(1);
    }
    
    /**
     * Clear <caller_id> value
     *
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function clearCallerId(){
      return $this->_clear(1);
    }
    
    /**
     * Get <caller_id> value
     *
     * @return \Vitess\Proto\Vtrpc\CallerID
     */
    public function getCallerId(){
      return $this->_get(1);
    }
    
    /**
     * Set <caller_id> value
     *
     * @param \Vitess\Proto\Vtrpc\CallerID $value
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function setCallerId(\Vitess\Proto\Vtrpc\CallerID $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <query> has a value
     *
     * @return boolean
     */
    public function hasQuery(){
      return $this->_has(2);
    }
    
    /**
     * Clear <query> value
     *
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function clearQuery(){
      return $this->_clear(2);
    }
    
    /**
     * Get <query> value
     *
     * @return \Vitess\Proto\Query\BoundQuery
     */
    public function getQuery(){
      return $this->_get(2);
    }
    
    /**
     * Set <query> value
     *
     * @param \Vitess\Proto\Query\BoundQuery $value
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function setQuery(\Vitess\Proto\Query\BoundQuery $value){
      return $this->_set(2, $value);
    }
    
    /**
     * Check if <tablet_type> has a value
     *
     * @return boolean
     */
    public function hasTabletType(){
      return $this->_has(3);
    }
    
    /**
     * Clear <tablet_type> value
     *
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function clearTabletType(){
      return $this->_clear(3);
    }
    
    /**
     * Get <tablet_type> value
     *
     * @return int - \Vitess\Proto\Topodata\TabletType
     */
    public function getTabletType(){
      return $this->_get(3);
    }
    
    /**
     * Set <tablet_type> value
     *
     * @param int - \Vitess\Proto\Topodata\TabletType $value
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function setTabletType( $value){
      return $this->_set(3, $value);
    }
    
    /**
     * Check if <keyspace> has a value
     *
     * @return boolean
     */
    public function hasKeyspace(){
      return $this->_has(4);
    }
    
    /**
     * Clear <keyspace> value
     *
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function clearKeyspace(){
      return $this->_clear(4);
    }
    
    /**
     * Get <keyspace> value
     *
     * @return string
     */
    public function getKeyspace(){
      return $this->_get(4);
    }
    
    /**
     * Set <keyspace> value
     *
     * @param string $value
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function setKeyspace( $value){
      return $this->_set(4, $value);
    }
    
    /**
     * Check if <options> has a value
     *
     * @return boolean
     */
    public function hasOptions(){
      return $this->_has(5);
    }
    
    /**
     * Clear <options> value
     *
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function clearOptions(){
      return $this->_clear(5);
    }
    
    /**
     * Get <options> value
     *
     * @return \Vitess\Proto\Query\ExecuteOptions
     */
    public function getOptions(){
      return $this->_get(5);
    }
    
    /**
     * Set <options> value
     *
     * @param \Vitess\Proto\Query\ExecuteOptions $value
     * @return \Vitess\Proto\Vtgate\StreamExecuteRequest
     */
    public function setOptions(\Vitess\Proto\Query\ExecuteOptions $value){
      return $this->_set(5, $value);
    }
  }
}

