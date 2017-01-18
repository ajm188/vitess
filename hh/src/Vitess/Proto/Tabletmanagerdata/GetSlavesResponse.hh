<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class GetSlavesResponse extends \DrSlump\Protobuf\Message {

    /**  @var string[]  */
    public $addrs = array();
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.GetSlavesResponse');

      // REPEATED STRING addrs = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "addrs";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_REPEATED;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <addrs> has a value
     *
     * @return boolean
     */
    public function hasAddrs(){
      return $this->_has(1);
    }
    
    /**
     * Clear <addrs> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\GetSlavesResponse
     */
    public function clearAddrs(){
      return $this->_clear(1);
    }
    
    /**
     * Get <addrs> value
     *
     * @param int $idx
     * @return string
     */
    public function getAddrs($idx = NULL){
      return $this->_get(1, $idx);
    }
    
    /**
     * Set <addrs> value
     *
     * @param string $value
     * @return \Vitess\Proto\Tabletmanagerdata\GetSlavesResponse
     */
    public function setAddrs( $value, $idx = NULL){
      return $this->_set(1, $value, $idx);
    }
    
    /**
     * Get all elements of <addrs>
     *
     * @return string[]
     */
    public function getAddrsList(){
     return $this->_get(1);
    }
    
    /**
     * Add a new element to <addrs>
     *
     * @param string $value
     * @return \Vitess\Proto\Tabletmanagerdata\GetSlavesResponse
     */
    public function addAddrs( $value){
     return $this->_add(1, $value);
    }
  }
}

