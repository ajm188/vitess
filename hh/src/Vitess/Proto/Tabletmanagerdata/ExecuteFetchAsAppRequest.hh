<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class ExecuteFetchAsAppRequest extends \DrSlump\Protobuf\Message {

    /**  @var string */
    public $query = null;
    
    /**  @var int */
    public $max_rows = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.ExecuteFetchAsAppRequest');

      // OPTIONAL BYTES query = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "query";
      $f->type      = \DrSlump\Protobuf::TYPE_BYTES;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL UINT64 max_rows = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "max_rows";
      $f->type      = \DrSlump\Protobuf::TYPE_UINT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <query> has a value
     *
     * @return boolean
     */
    public function hasQuery(){
      return $this->_has(1);
    }
    
    /**
     * Clear <query> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\ExecuteFetchAsAppRequest
     */
    public function clearQuery(){
      return $this->_clear(1);
    }
    
    /**
     * Get <query> value
     *
     * @return string
     */
    public function getQuery(){
      return $this->_get(1);
    }
    
    /**
     * Set <query> value
     *
     * @param string $value
     * @return \Vitess\Proto\Tabletmanagerdata\ExecuteFetchAsAppRequest
     */
    public function setQuery( $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <max_rows> has a value
     *
     * @return boolean
     */
    public function hasMaxRows(){
      return $this->_has(2);
    }
    
    /**
     * Clear <max_rows> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\ExecuteFetchAsAppRequest
     */
    public function clearMaxRows(){
      return $this->_clear(2);
    }
    
    /**
     * Get <max_rows> value
     *
     * @return int
     */
    public function getMaxRows(){
      return $this->_get(2);
    }
    
    /**
     * Set <max_rows> value
     *
     * @param int $value
     * @return \Vitess\Proto\Tabletmanagerdata\ExecuteFetchAsAppRequest
     */
    public function setMaxRows( $value){
      return $this->_set(2, $value);
    }
  }
}

