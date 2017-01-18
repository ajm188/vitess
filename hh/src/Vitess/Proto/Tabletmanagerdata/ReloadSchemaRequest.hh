<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class ReloadSchemaRequest extends \DrSlump\Protobuf\Message {

    /**  @var string */
    public $wait_position = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.ReloadSchemaRequest');

      // OPTIONAL STRING wait_position = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "wait_position";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <wait_position> has a value
     *
     * @return boolean
     */
    public function hasWaitPosition(){
      return $this->_has(1);
    }
    
    /**
     * Clear <wait_position> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\ReloadSchemaRequest
     */
    public function clearWaitPosition(){
      return $this->_clear(1);
    }
    
    /**
     * Get <wait_position> value
     *
     * @return string
     */
    public function getWaitPosition(){
      return $this->_get(1);
    }
    
    /**
     * Set <wait_position> value
     *
     * @param string $value
     * @return \Vitess\Proto\Tabletmanagerdata\ReloadSchemaRequest
     */
    public function setWaitPosition( $value){
      return $this->_set(1, $value);
    }
  }
}

