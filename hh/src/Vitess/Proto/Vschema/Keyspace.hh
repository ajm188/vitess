<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vschema.proto

namespace Vitess\Proto\Vschema {

  class Keyspace extends \DrSlump\Protobuf\Message {

    /**  @var boolean */
    public $sharded = null;
    
    /**  @var \Vitess\Proto\Vschema\Keyspace\VindexesEntry[]  */
    public $vindexes = array();
    
    /**  @var \Vitess\Proto\Vschema\Keyspace\TablesEntry[]  */
    public $tables = array();
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vschema.Keyspace');

      // OPTIONAL BOOL sharded = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "sharded";
      $f->type      = \DrSlump\Protobuf::TYPE_BOOL;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // REPEATED MESSAGE vindexes = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "vindexes";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_REPEATED;
      $f->reference = '\Vitess\Proto\Vschema\Keyspace\VindexesEntry';
      $descriptor->addField($f);

      // REPEATED MESSAGE tables = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "tables";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_REPEATED;
      $f->reference = '\Vitess\Proto\Vschema\Keyspace\TablesEntry';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <sharded> has a value
     *
     * @return boolean
     */
    public function hasSharded(){
      return $this->_has(1);
    }
    
    /**
     * Clear <sharded> value
     *
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function clearSharded(){
      return $this->_clear(1);
    }
    
    /**
     * Get <sharded> value
     *
     * @return boolean
     */
    public function getSharded(){
      return $this->_get(1);
    }
    
    /**
     * Set <sharded> value
     *
     * @param boolean $value
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function setSharded( $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <vindexes> has a value
     *
     * @return boolean
     */
    public function hasVindexes(){
      return $this->_has(2);
    }
    
    /**
     * Clear <vindexes> value
     *
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function clearVindexes(){
      return $this->_clear(2);
    }
    
    /**
     * Get <vindexes> value
     *
     * @param int $idx
     * @return \Vitess\Proto\Vschema\Keyspace\VindexesEntry
     */
    public function getVindexes($idx = NULL){
      return $this->_get(2, $idx);
    }
    
    /**
     * Set <vindexes> value
     *
     * @param \Vitess\Proto\Vschema\Keyspace\VindexesEntry $value
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function setVindexes(\Vitess\Proto\Vschema\Keyspace\VindexesEntry $value, $idx = NULL){
      return $this->_set(2, $value, $idx);
    }
    
    /**
     * Get all elements of <vindexes>
     *
     * @return \Vitess\Proto\Vschema\Keyspace\VindexesEntry[]
     */
    public function getVindexesList(){
     return $this->_get(2);
    }
    
    /**
     * Add a new element to <vindexes>
     *
     * @param \Vitess\Proto\Vschema\Keyspace\VindexesEntry $value
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function addVindexes(\Vitess\Proto\Vschema\Keyspace\VindexesEntry $value){
     return $this->_add(2, $value);
    }
    
    /**
     * Check if <tables> has a value
     *
     * @return boolean
     */
    public function hasTables(){
      return $this->_has(3);
    }
    
    /**
     * Clear <tables> value
     *
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function clearTables(){
      return $this->_clear(3);
    }
    
    /**
     * Get <tables> value
     *
     * @param int $idx
     * @return \Vitess\Proto\Vschema\Keyspace\TablesEntry
     */
    public function getTables($idx = NULL){
      return $this->_get(3, $idx);
    }
    
    /**
     * Set <tables> value
     *
     * @param \Vitess\Proto\Vschema\Keyspace\TablesEntry $value
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function setTables(\Vitess\Proto\Vschema\Keyspace\TablesEntry $value, $idx = NULL){
      return $this->_set(3, $value, $idx);
    }
    
    /**
     * Get all elements of <tables>
     *
     * @return \Vitess\Proto\Vschema\Keyspace\TablesEntry[]
     */
    public function getTablesList(){
     return $this->_get(3);
    }
    
    /**
     * Add a new element to <tables>
     *
     * @param \Vitess\Proto\Vschema\Keyspace\TablesEntry $value
     * @return \Vitess\Proto\Vschema\Keyspace
     */
    public function addTables(\Vitess\Proto\Vschema\Keyspace\TablesEntry $value){
     return $this->_add(3, $value);
    }
  }
}

