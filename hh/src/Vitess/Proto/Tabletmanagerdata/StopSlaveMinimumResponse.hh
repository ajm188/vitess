<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class StopSlaveMinimumResponse extends \DrSlump\Protobuf\Message {

    /**  @var string */
    public $position = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.StopSlaveMinimumResponse');

      // OPTIONAL STRING position = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "position";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <position> has a value
     *
     * @return boolean
     */
    public function hasPosition(){
      return $this->_has(1);
    }
    
    /**
     * Clear <position> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\StopSlaveMinimumResponse
     */
    public function clearPosition(){
      return $this->_clear(1);
    }
    
    /**
     * Get <position> value
     *
     * @return string
     */
    public function getPosition(){
      return $this->_get(1);
    }
    
    /**
     * Set <position> value
     *
     * @param string $value
     * @return \Vitess\Proto\Tabletmanagerdata\StopSlaveMinimumResponse
     */
    public function setPosition( $value){
      return $this->_set(1, $value);
    }
  }
}

