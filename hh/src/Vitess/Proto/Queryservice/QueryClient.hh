<?hh
// DO NOT EDIT! Generated by Protobuf-PHP protoc plugin 1.0
// Source: queryservice.proto

namespace Vitess\Proto\Queryservice {

  class QueryClient extends \Grpc\BaseStub {

    public function __construct($hostname, $opts, $channel = null) {
      parent::__construct($hostname, $opts, $channel);
    }
    /**
     * @param Vitess\Proto\Query\ExecuteRequest $input
     */
    public function Execute(\Vitess\Proto\Query\ExecuteRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/Execute', $argument, '\Vitess\Proto\Query\ExecuteResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\ExecuteBatchRequest $input
     */
    public function ExecuteBatch(\Vitess\Proto\Query\ExecuteBatchRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/ExecuteBatch', $argument, '\Vitess\Proto\Query\ExecuteBatchResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\StreamExecuteRequest $input
     */
    public function StreamExecute($argument, $metadata = array(), $options = array()) {
      return $this->_serverStreamRequest('/queryservice.Query/StreamExecute', $argument, '\Vitess\Proto\Query\StreamExecuteResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\BeginRequest $input
     */
    public function Begin(\Vitess\Proto\Query\BeginRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/Begin', $argument, '\Vitess\Proto\Query\BeginResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\CommitRequest $input
     */
    public function Commit(\Vitess\Proto\Query\CommitRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/Commit', $argument, '\Vitess\Proto\Query\CommitResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\RollbackRequest $input
     */
    public function Rollback(\Vitess\Proto\Query\RollbackRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/Rollback', $argument, '\Vitess\Proto\Query\RollbackResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\PrepareRequest $input
     */
    public function Prepare(\Vitess\Proto\Query\PrepareRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/Prepare', $argument, '\Vitess\Proto\Query\PrepareResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\CommitPreparedRequest $input
     */
    public function CommitPrepared(\Vitess\Proto\Query\CommitPreparedRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/CommitPrepared', $argument, '\Vitess\Proto\Query\CommitPreparedResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\RollbackPreparedRequest $input
     */
    public function RollbackPrepared(\Vitess\Proto\Query\RollbackPreparedRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/RollbackPrepared', $argument, '\Vitess\Proto\Query\RollbackPreparedResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\CreateTransactionRequest $input
     */
    public function CreateTransaction(\Vitess\Proto\Query\CreateTransactionRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/CreateTransaction', $argument, '\Vitess\Proto\Query\CreateTransactionResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\StartCommitRequest $input
     */
    public function StartCommit(\Vitess\Proto\Query\StartCommitRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/StartCommit', $argument, '\Vitess\Proto\Query\StartCommitResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\SetRollbackRequest $input
     */
    public function SetRollback(\Vitess\Proto\Query\SetRollbackRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/SetRollback', $argument, '\Vitess\Proto\Query\SetRollbackResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\ResolveTransactionRequest $input
     */
    public function ResolveTransaction(\Vitess\Proto\Query\ResolveTransactionRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/ResolveTransaction', $argument, '\Vitess\Proto\Query\ResolveTransactionResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\ReadTransactionRequest $input
     */
    public function ReadTransaction(\Vitess\Proto\Query\ReadTransactionRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/ReadTransaction', $argument, '\Vitess\Proto\Query\ReadTransactionResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\BeginExecuteRequest $input
     */
    public function BeginExecute(\Vitess\Proto\Query\BeginExecuteRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/BeginExecute', $argument, '\Vitess\Proto\Query\BeginExecuteResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\BeginExecuteBatchRequest $input
     */
    public function BeginExecuteBatch(\Vitess\Proto\Query\BeginExecuteBatchRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/BeginExecuteBatch', $argument, '\Vitess\Proto\Query\BeginExecuteBatchResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\SplitQueryRequest $input
     */
    public function SplitQuery(\Vitess\Proto\Query\SplitQueryRequest $argument, $metadata = array(), $options = array()) {
      return $this->_simpleRequest('/queryservice.Query/SplitQuery', $argument, '\Vitess\Proto\Query\SplitQueryResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\StreamHealthRequest $input
     */
    public function StreamHealth($argument, $metadata = array(), $options = array()) {
      return $this->_serverStreamRequest('/queryservice.Query/StreamHealth', $argument, '\Vitess\Proto\Query\StreamHealthResponse::deserialize', $metadata, $options);
    }
    /**
     * @param Vitess\Proto\Query\UpdateStreamRequest $input
     */
    public function UpdateStream($argument, $metadata = array(), $options = array()) {
      return $this->_serverStreamRequest('/queryservice.Query/UpdateStream', $argument, '\Vitess\Proto\Query\UpdateStreamResponse::deserialize', $metadata, $options);
    }
  }
}
