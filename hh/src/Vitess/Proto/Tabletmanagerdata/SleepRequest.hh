<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: tabletmanagerdata.proto

namespace Vitess\Proto\Tabletmanagerdata {

  class SleepRequest extends \DrSlump\Protobuf\Message {

    /**  @var int */
    public $duration = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'tabletmanagerdata.SleepRequest');

      // OPTIONAL INT64 duration = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "duration";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <duration> has a value
     *
     * @return boolean
     */
    public function hasDuration(){
      return $this->_has(1);
    }
    
    /**
     * Clear <duration> value
     *
     * @return \Vitess\Proto\Tabletmanagerdata\SleepRequest
     */
    public function clearDuration(){
      return $this->_clear(1);
    }
    
    /**
     * Get <duration> value
     *
     * @return int
     */
    public function getDuration(){
      return $this->_get(1);
    }
    
    /**
     * Set <duration> value
     *
     * @param int $value
     * @return \Vitess\Proto\Tabletmanagerdata\SleepRequest
     */
    public function setDuration( $value){
      return $this->_set(1, $value);
    }
  }
}

