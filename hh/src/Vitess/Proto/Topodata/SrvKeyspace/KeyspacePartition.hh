<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: topodata.proto

namespace Vitess\Proto\Topodata\SrvKeyspace {

  class KeyspacePartition extends \DrSlump\Protobuf\Message {

    /**  @var int - \Vitess\Proto\Topodata\TabletType */
    public $served_type = null;
    
    /**  @var \Vitess\Proto\Topodata\ShardReference[]  */
    public $shard_references = array();
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'topodata.SrvKeyspace.KeyspacePartition');

      // OPTIONAL ENUM served_type = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "served_type";
      $f->type      = \DrSlump\Protobuf::TYPE_ENUM;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Topodata\TabletType';
      $descriptor->addField($f);

      // REPEATED MESSAGE shard_references = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "shard_references";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_REPEATED;
      $f->reference = '\Vitess\Proto\Topodata\ShardReference';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <served_type> has a value
     *
     * @return boolean
     */
    public function hasServedType(){
      return $this->_has(1);
    }
    
    /**
     * Clear <served_type> value
     *
     * @return \Vitess\Proto\Topodata\SrvKeyspace\KeyspacePartition
     */
    public function clearServedType(){
      return $this->_clear(1);
    }
    
    /**
     * Get <served_type> value
     *
     * @return int - \Vitess\Proto\Topodata\TabletType
     */
    public function getServedType(){
      return $this->_get(1);
    }
    
    /**
     * Set <served_type> value
     *
     * @param int - \Vitess\Proto\Topodata\TabletType $value
     * @return \Vitess\Proto\Topodata\SrvKeyspace\KeyspacePartition
     */
    public function setServedType( $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <shard_references> has a value
     *
     * @return boolean
     */
    public function hasShardReferences(){
      return $this->_has(2);
    }
    
    /**
     * Clear <shard_references> value
     *
     * @return \Vitess\Proto\Topodata\SrvKeyspace\KeyspacePartition
     */
    public function clearShardReferences(){
      return $this->_clear(2);
    }
    
    /**
     * Get <shard_references> value
     *
     * @param int $idx
     * @return \Vitess\Proto\Topodata\ShardReference
     */
    public function getShardReferences($idx = NULL){
      return $this->_get(2, $idx);
    }
    
    /**
     * Set <shard_references> value
     *
     * @param \Vitess\Proto\Topodata\ShardReference $value
     * @return \Vitess\Proto\Topodata\SrvKeyspace\KeyspacePartition
     */
    public function setShardReferences(\Vitess\Proto\Topodata\ShardReference $value, $idx = NULL){
      return $this->_set(2, $value, $idx);
    }
    
    /**
     * Get all elements of <shard_references>
     *
     * @return \Vitess\Proto\Topodata\ShardReference[]
     */
    public function getShardReferencesList(){
     return $this->_get(2);
    }
    
    /**
     * Add a new element to <shard_references>
     *
     * @param \Vitess\Proto\Topodata\ShardReference $value
     * @return \Vitess\Proto\Topodata\SrvKeyspace\KeyspacePartition
     */
    public function addShardReferences(\Vitess\Proto\Topodata\ShardReference $value){
     return $this->_add(2, $value);
    }
  }
}

