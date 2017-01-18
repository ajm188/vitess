<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: logutil.proto

namespace Vitess\Proto\Logutil {

  class Event extends \DrSlump\Protobuf\Message {

    /**  @var \Vitess\Proto\Logutil\Time */
    public $time = null;
    
    /**  @var int - \Vitess\Proto\Logutil\Level */
    public $level = null;
    
    /**  @var string */
    public $file = null;
    
    /**  @var int */
    public $line = null;
    
    /**  @var string */
    public $value = null;
    

    /** @var \Closure[] */
    protected static $__extensions = array();

    public static function descriptor()
    {
      $descriptor = new \DrSlump\Protobuf\Descriptor(__CLASS__, 'logutil.Event');

      // OPTIONAL MESSAGE time = 1
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 1;
      $f->name      = "time";
      $f->type      = \DrSlump\Protobuf::TYPE_MESSAGE;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Logutil\Time';
      $descriptor->addField($f);

      // OPTIONAL ENUM level = 2
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 2;
      $f->name      = "level";
      $f->type      = \DrSlump\Protobuf::TYPE_ENUM;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $f->reference = '\Vitess\Proto\Logutil\Level';
      $descriptor->addField($f);

      // OPTIONAL STRING file = 3
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 3;
      $f->name      = "file";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL INT64 line = 4
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 4;
      $f->name      = "line";
      $f->type      = \DrSlump\Protobuf::TYPE_INT64;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      // OPTIONAL STRING value = 5
      $f = new \DrSlump\Protobuf\Field();
      $f->number    = 5;
      $f->name      = "value";
      $f->type      = \DrSlump\Protobuf::TYPE_STRING;
      $f->rule      = \DrSlump\Protobuf::RULE_OPTIONAL;
      $descriptor->addField($f);

      foreach (self::$__extensions as $cb) {
        $descriptor->addField($cb(), true);
      }

      return $descriptor;
    }

    /**
     * Check if <time> has a value
     *
     * @return boolean
     */
    public function hasTime(){
      return $this->_has(1);
    }
    
    /**
     * Clear <time> value
     *
     * @return \Vitess\Proto\Logutil\Event
     */
    public function clearTime(){
      return $this->_clear(1);
    }
    
    /**
     * Get <time> value
     *
     * @return \Vitess\Proto\Logutil\Time
     */
    public function getTime(){
      return $this->_get(1);
    }
    
    /**
     * Set <time> value
     *
     * @param \Vitess\Proto\Logutil\Time $value
     * @return \Vitess\Proto\Logutil\Event
     */
    public function setTime(\Vitess\Proto\Logutil\Time $value){
      return $this->_set(1, $value);
    }
    
    /**
     * Check if <level> has a value
     *
     * @return boolean
     */
    public function hasLevel(){
      return $this->_has(2);
    }
    
    /**
     * Clear <level> value
     *
     * @return \Vitess\Proto\Logutil\Event
     */
    public function clearLevel(){
      return $this->_clear(2);
    }
    
    /**
     * Get <level> value
     *
     * @return int - \Vitess\Proto\Logutil\Level
     */
    public function getLevel(){
      return $this->_get(2);
    }
    
    /**
     * Set <level> value
     *
     * @param int - \Vitess\Proto\Logutil\Level $value
     * @return \Vitess\Proto\Logutil\Event
     */
    public function setLevel( $value){
      return $this->_set(2, $value);
    }
    
    /**
     * Check if <file> has a value
     *
     * @return boolean
     */
    public function hasFile(){
      return $this->_has(3);
    }
    
    /**
     * Clear <file> value
     *
     * @return \Vitess\Proto\Logutil\Event
     */
    public function clearFile(){
      return $this->_clear(3);
    }
    
    /**
     * Get <file> value
     *
     * @return string
     */
    public function getFile(){
      return $this->_get(3);
    }
    
    /**
     * Set <file> value
     *
     * @param string $value
     * @return \Vitess\Proto\Logutil\Event
     */
    public function setFile( $value){
      return $this->_set(3, $value);
    }
    
    /**
     * Check if <line> has a value
     *
     * @return boolean
     */
    public function hasLine(){
      return $this->_has(4);
    }
    
    /**
     * Clear <line> value
     *
     * @return \Vitess\Proto\Logutil\Event
     */
    public function clearLine(){
      return $this->_clear(4);
    }
    
    /**
     * Get <line> value
     *
     * @return int
     */
    public function getLine(){
      return $this->_get(4);
    }
    
    /**
     * Set <line> value
     *
     * @param int $value
     * @return \Vitess\Proto\Logutil\Event
     */
    public function setLine( $value){
      return $this->_set(4, $value);
    }
    
    /**
     * Check if <value> has a value
     *
     * @return boolean
     */
    public function hasValue(){
      return $this->_has(5);
    }
    
    /**
     * Clear <value> value
     *
     * @return \Vitess\Proto\Logutil\Event
     */
    public function clearValue(){
      return $this->_clear(5);
    }
    
    /**
     * Get <value> value
     *
     * @return string
     */
    public function getValue(){
      return $this->_get(5);
    }
    
    /**
     * Set <value> value
     *
     * @param string $value
     * @return \Vitess\Proto\Logutil\Event
     */
    public function setValue( $value){
      return $this->_set(5, $value);
    }
  }
}

