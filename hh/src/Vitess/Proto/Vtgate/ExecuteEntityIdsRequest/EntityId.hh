<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vtgate.proto

namespace Vitess\Proto\Vtgate\ExecuteEntityIdsRequest {

  class EntityId extends \DrSlump\Protobuf\Message {

    /**  @var int - \Vitess\Proto\Query\Type */
    public $type = null;
    
    /**  @var string */
    public $value = null;
    
    /**  @var string */
    public $keyspace_id = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vtgate.ExecuteEntityIdsRequest.EntityId');

      // OPTIONAL ENUM type = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "type";
      $f->type      = \DrSlump\Protobuf::TYPE_ENUM;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Query\Type';
      $descriptor->addField($f);

      // OPTIONAL BYTES value = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "value";
      $f->type      = \DrSlump\Protobuf::TYPE_BYTES;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL BYTES keyspace_id = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "keyspace_id";
      $f->type      = \DrSlump\Protobuf::TYPE_BYTES;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <type> has a value
     *
     * @return boolean
     */
    public function hasType(){
      return $this->_has(1);
    }
    
    /**
     * Clear <type> value
     *
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsRequest\EntityId
     */
    public function clearType(){
      return $this->_clear(1);
    }
    
    /**
     * Get <type> value
     *
     * @return int - \Vitess\Proto\Query\Type
     */
    public function getType(){
      return $this->_get(1);
    }
    
    /**
     * Set <type> value
     *
     * @param int - \Vitess\Proto\Query\Type $value
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsRequest\EntityId
     */
    public function setType( $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <value> has a value
     *
     * @return boolean
     */
    public function hasValue(){
      return $this->_has(2);
    }
    
    /**
     * Clear <value> value
     *
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsRequest\EntityId
     */
    public function clearValue(){
      return $this->_clear(2);
    }
    
    /**
     * Get <value> value
     *
     * @return string
     */
    public function getValue(){
      return $this->_get(2);
    }
    
    /**
     * Set <value> value
     *
     * @param string $value
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsRequest\EntityId
     */
    public function setValue( $value){
      return $this->_set(2, $value);
    }
    
    /**
     * Check if <keyspace_id> has a value
     *
     * @return boolean
     */
    public function hasKeyspaceId(){
      return $this->_has(3);
    }
    
    /**
     * Clear <keyspace_id> value
     *
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsRequest\EntityId
     */
    public function clearKeyspaceId(){
      return $this->_clear(3);
    }
    
    /**
     * Get <keyspace_id> value
     *
     * @return string
     */
    public function getKeyspaceId(){
      return $this->_get(3);
    }
    
    /**
     * Set <keyspace_id> value
     *
     * @param string $value
     * @return \Vitess\Proto\Vtgate\ExecuteEntityIdsRequest\EntityId
     */
    public function setKeyspaceId( $value){
      return $this->_set(3, $value);
    }
  }
}

