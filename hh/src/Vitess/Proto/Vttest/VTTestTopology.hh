<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vttest.proto

namespace Vitess\Proto\Vttest {

  class VTTestTopology extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Vttest\Keyspace[]  */
    public $keyspaces = array();
    
    /**  @var string[]  */
    public $cells = array();
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vttest.VTTestTopology');

      // REPEATED MESSAGE keyspaces = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "keyspaces";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_REPEATED;
      $f->reference = '\Vitess\Proto\Vttest\Keyspace';
      $descriptor->addField($f);

      // REPEATED STRING cells = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "cells";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_REPEATED;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <keyspaces> has a value
     *
     * @return boolean
     */
    public function hasKeyspaces(){
      return $this->_has(1);
    }
    
    /**
     * Clear <keyspaces> value
     *
     * @return \Vitess\Proto\Vttest\VTTestTopology
     */
    public function clearKeyspaces(){
      return $this->_clear(1);
    }
    
    /**
     * Get <keyspaces> value
     *
     * @param int $idx
     * @return \Vitess\Proto\Vttest\Keyspace
     */
    public function getKeyspaces($idx = NULL){
      return $this->_get(1, $idx);
    }
    
    /**
     * Set <keyspaces> value
     *
     * @param \Vitess\Proto\Vttest\Keyspace $value
     * @return \Vitess\Proto\Vttest\VTTestTopology
     */
    public function setKeyspaces(\Vitess\Proto\Vttest\Keyspace $value, $idx = NULL){
      return $this->_set(1, $value, $idx);
    }
    
    /**
     * Get all elements of <keyspaces>
     *
     * @return \Vitess\Proto\Vttest\Keyspace[]
     */
    public function getKeyspacesList(){
     return $this->_get(1);
    }
    
    /**
     * Add a new element to <keyspaces>
     *
     * @param \Vitess\Proto\Vttest\Keyspace $value
     * @return \Vitess\Proto\Vttest\VTTestTopology
     */
    public function addKeyspaces(\Vitess\Proto\Vttest\Keyspace $value){
     return $this->_add(1, $value);
    }
    
    /**
     * Check if <cells> has a value
     *
     * @return boolean
     */
    public function hasCells(){
      return $this->_has(2);
    }
    
    /**
     * Clear <cells> value
     *
     * @return \Vitess\Proto\Vttest\VTTestTopology
     */
    public function clearCells(){
      return $this->_clear(2);
    }
    
    /**
     * Get <cells> value
     *
     * @param int $idx
     * @return string
     */
    public function getCells($idx = NULL){
      return $this->_get(2, $idx);
    }
    
    /**
     * Set <cells> value
     *
     * @param string $value
     * @return \Vitess\Proto\Vttest\VTTestTopology
     */
    public function setCells( $value, $idx = NULL){
      return $this->_set(2, $value, $idx);
    }
    
    /**
     * Get all elements of <cells>
     *
     * @return string[]
     */
    public function getCellsList(){
     return $this->_get(2);
    }
    
    /**
     * Add a new element to <cells>
     *
     * @param string $value
     * @return \Vitess\Proto\Vttest\VTTestTopology
     */
    public function addCells( $value){
     return $this->_add(2, $value);
    }
  }
}

