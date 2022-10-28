<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace fixtures\no-legacy-apis;

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/no-legacy-apis/MyService'))>>
interface MyServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   query(1: MyUnion u);
   */
  public function query(?\fixtures\no-legacy-apis\MyUnion $u): Awaitable<\fixtures\no-legacy-apis\MyStruct>;
}

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/no-legacy-apis/MyService'))>>
interface MyServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   query(1: MyUnion u);
   */
  public function query(?\fixtures\no-legacy-apis\MyUnion $u): \fixtures\no-legacy-apis\MyStruct;
}

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/no-legacy-apis/MyService'))>>
interface MyServiceAsyncClientIf extends MyServiceAsyncIf {
}

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/no-legacy-apis/MyService'))>>
interface MyServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyStruct
   *   query(1: MyUnion u);
   */
  public function query(?\fixtures\no-legacy-apis\MyUnion $u): Awaitable<\fixtures\no-legacy-apis\MyStruct>;
}

/**
 * Original thrift service:-
 * MyService
 */
trait MyServiceClientBase {
  require extends \ThriftClientBase;

}

class MyServiceAsyncClient extends \ThriftClientBase implements MyServiceAsyncClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * MyStruct
   *   query(1: MyUnion u);
   */
  public async function query(?\fixtures\no-legacy-apis\MyUnion $u): Awaitable<\fixtures\no-legacy-apis\MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \fixtures\no-legacy-apis\MyService_query_args::fromShape(shape(
      'u' => $u,
    ));
    await $this->asyncHandler_->genBefore("MyService", "query", $args);
    $currentseqid = $this->sendImplHelper($args, "query", false);
    return await $this->genAwaitResponse(\fixtures\no-legacy-apis\MyService_query_result::class, "query", false, $currentseqid, $rpc_options);
  }

}

class MyServiceClient extends \ThriftClientBase implements MyServiceClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * MyStruct
   *   query(1: MyUnion u);
   */
  public async function query(?\fixtures\no-legacy-apis\MyUnion $u): Awaitable<\fixtures\no-legacy-apis\MyStruct> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \fixtures\no-legacy-apis\MyService_query_args::fromShape(shape(
      'u' => $u,
    ));
    await $this->asyncHandler_->genBefore("MyService", "query", $args);
    $currentseqid = $this->sendImplHelper($args, "query", false);
    return await $this->genAwaitResponse(\fixtures\no-legacy-apis\MyService_query_result::class, "query", false, $currentseqid, $rpc_options);
  }

  /* send and recv functions */
  public function send_query(?\fixtures\no-legacy-apis\MyUnion $u): int {
    $args = \fixtures\no-legacy-apis\MyService_query_args::fromShape(shape(
      'u' => $u,
    ));
    return $this->sendImplHelper($args, "query", false);
  }
  public function recv_query(?int $expectedsequenceid = null): \fixtures\no-legacy-apis\MyStruct {
    return $this->recvImplHelper(\fixtures\no-legacy-apis\MyService_query_result::class, "query", false, $expectedsequenceid);
  }
}

abstract class MyServiceAsyncProcessorBase extends \ThriftAsyncProcessor {
  abstract const type TThriftIf as MyServiceAsyncIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = MyServiceStaticMetadata::class;

  protected async function process_query(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('query');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'query', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\fixtures\no-legacy-apis\MyService_query_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\fixtures\no-legacy-apis\MyService_query_args');
    } else {
      $args = \fixtures\no-legacy-apis\MyService_query_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'query', $args);
    $result = \fixtures\no-legacy-apis\MyService_query_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, '\fixtures\no-legacy-apis\MyService', 'query', $args);
      $result->success = await $this->handler->query($args->u);
      $this->eventHandler_->postExec($handler_ctx, 'query', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'query', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'query', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'query', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'query', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("query", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'query', $result);
  }
  protected async function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = MyServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
class MyServiceAsyncProcessor extends MyServiceAsyncProcessorBase {
  const type TThriftIf = MyServiceAsyncIf;
}

abstract class MyServiceSyncProcessorBase extends \ThriftSyncProcessor {
  abstract const type TThriftIf as MyServiceIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = MyServiceStaticMetadata::class;

  protected function process_query(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('query');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'query', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\fixtures\no-legacy-apis\MyService_query_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\fixtures\no-legacy-apis\MyService_query_args');
    } else {
      $args = \fixtures\no-legacy-apis\MyService_query_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'query', $args);
    $result = \fixtures\no-legacy-apis\MyService_query_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, '\fixtures\no-legacy-apis\MyService', 'query', $args);
      $result->success = $this->handler->query($args->u);
      $this->eventHandler_->postExec($handler_ctx, 'query', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'query', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'query', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'query', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'query', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("query", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'query', $result);
  }
  protected function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = MyServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
class MyServiceSyncProcessor extends MyServiceSyncProcessorBase {
  const type TThriftIf = MyServiceIf;
}
// For backwards compatibility
class MyServiceProcessor extends MyServiceSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class MyService_query_args implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'u',
      'type' => \TType::STRUCT,
      'class' => \fixtures\no-legacy-apis\MyUnion::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'u' => 1,
  ];

  const type TConstructorShape = shape(
    ?'u' => ?\fixtures\no-legacy-apis\MyUnion,
  );

  const type TShape = shape(
    ?'u' => ?\fixtures\no-legacy-apis\MyUnion::TShape,
    ...
  );
  const int STRUCTURAL_ID = 806889198569760186;
  public ?\fixtures\no-legacy-apis\MyUnion $u;

  public function __construct(?\fixtures\no-legacy-apis\MyUnion $u = null)[] {
    $this->u = $u;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'u'),
    );
  }

  public function getName()[]: string {
    return 'MyService_query_args';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.query_args",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyUnion",
                    )
                  ),
                )
              ),
              "name" => "u",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'u') === null ? null : (\fixtures\no-legacy-apis\MyUnion::__fromShape($shape['u'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'u' => $this->u?->__toShape(),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'u') !== null) {
      $_tmp0 = \json_encode(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\no-legacy-apis\MyUnion>($parsed['u']));
      $_tmp1 = \fixtures\no-legacy-apis\MyUnion::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->u = $_tmp1;
    }
  }

}

class MyService_query_result extends \ThriftSyncStructWithResult {
  use \ThriftSerializationTrait;

  const type TResult = \fixtures\no-legacy-apis\MyStruct;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRUCT,
      'class' => \fixtures\no-legacy-apis\MyStruct::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 7307096097859369800;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'MyService_query_result';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyService_query_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_tmp0 = \json_encode(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\no-legacy-apis\MyStruct>($parsed['success']));
      $_tmp1 = \fixtures\no-legacy-apis\MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->success = $_tmp1;
    }
  }

}

class MyServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.MyService",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "query",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "arguments" => vec[
                \tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => \tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => \tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "module.MyUnion",
                          )
                        ),
                      )
                    ),
                    "name" => "u",
                  )
                ),
              ],
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
              'module.MyEnum' => \fixtures\no-legacy-apis\MyEnum_TEnumStaticMetadata::getEnumMetadata(),
            ],
            'structs' => dict[
              'module.MyStruct' => \fixtures\no-legacy-apis\MyStruct::getStructMetadata(),
              'module.MyUnion' => \fixtures\no-legacy-apis\MyUnion::getStructMetadata(),
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}

