<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: vtgate.proto

namespace Vitess\Proto\Vtgate {

  class GetSrvKeyspaceResponse extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Topodata\SrvKeyspace */
    public $srv_keyspace = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'vtgate.GetSrvKeyspaceResponse');

      // OPTIONAL MESSAGE srv_keyspace = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "srv_keyspace";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Topodata\SrvKeyspace';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <srv_keyspace> has a value
     *
     * @return boolean
     */
    public function hasSrvKeyspace(){
      return $this->_has(1);
    }
    
    /**
     * Clear <srv_keyspace> value
     *
     * @return \Vitess\Proto\Vtgate\GetSrvKeyspaceResponse
     */
    public function clearSrvKeyspace(){
      return $this->_clear(1);
    }
    
    /**
     * Get <srv_keyspace> value
     *
     * @return \Vitess\Proto\Topodata\SrvKeyspace
     */
    public function getSrvKeyspace(){
      return $this->_get(1);
    }
    
    /**
     * Set <srv_keyspace> value
     *
     * @param \Vitess\Proto\Topodata\SrvKeyspace $value
     * @return \Vitess\Proto\Vtgate\GetSrvKeyspaceResponse
     */
    public function setSrvKeyspace(\Vitess\Proto\Topodata\SrvKeyspace $value){
      return $this->_set(1, $value);
    }
  }
}

