<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class GetSchemaResponse extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Tabletmanagerdata\SchemaDefinition */
    public $schema_definition = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.GetSchemaResponse');

      // OPTIONAL MESSAGE schema_definition = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "schema_definition";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Tabletmanagerdata\SchemaDefinition';
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <schema_definition> has a value
     *
     * @return boolean
     */
    public function hasSchemaDefinition(){
      return $this->_has(1);
    }
    
    /**
     * Clear <schema_definition> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\GetSchemaResponse
     */
    public function clearSchemaDefinition(){
      return $this->_clear(1);
    }
    
    /**
     * Get <schema_definition> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\SchemaDefinition
     */
    public function getSchemaDefinition(){
      return $this->_get(1);
    }
    
    /**
     * Set <schema_definition> value
     *
     * @param \Vitess\Proto\Tabletmanagerdata\SchemaDefinition $value
     * @return \Vitess\Proto\Tabletmanagerdata\GetSchemaResponse
     */
    public function setSchemaDefinition(\Vitess\Proto\Tabletmanagerdata\SchemaDefinition $value){
      return $this->_set(1, $value);
    }
  }
}

