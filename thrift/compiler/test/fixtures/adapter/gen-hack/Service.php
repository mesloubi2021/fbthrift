<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace facebook\thrift\test;

/**
 * Original thrift service:-
 * Service
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/Service'))>>
interface ServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * MyI32
   *   func(1: StringWithAdapter arg1,
   *        2: string arg2,
   *        3: Foo arg3);
   */
  public function func(\facebook\thrift\test\StringWithAdapter $arg1, string $arg2, ?\facebook\thrift\test\Foo $arg3): Awaitable<\facebook\thrift\test\MyI32>;
}

/**
 * Original thrift service:-
 * Service
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/Service'))>>
interface ServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyI32
   *   func(1: StringWithAdapter arg1,
   *        2: string arg2,
   *        3: Foo arg3);
   */
  public function func(\facebook\thrift\test\StringWithAdapter $arg1, string $arg2, ?\facebook\thrift\test\Foo $arg3): \facebook\thrift\test\MyI32;
}

/**
 * Original thrift service:-
 * Service
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/Service'))>>
interface ServiceAsyncClientIf extends ServiceAsyncIf {
}

/**
 * Original thrift service:-
 * Service
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/test/Service'))>>
interface ServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * MyI32
   *   func(1: StringWithAdapter arg1,
   *        2: string arg2,
   *        3: Foo arg3);
   */
  public function func(\facebook\thrift\test\StringWithAdapter $arg1, string $arg2, ?\facebook\thrift\test\Foo $arg3): Awaitable<\facebook\thrift\test\MyI32>;
}

/**
 * Original thrift service:-
 * Service
 */
trait ServiceClientBase {
  require extends \ThriftClientBase;

}

class ServiceAsyncClient extends \ThriftClientBase implements ServiceAsyncClientIf {
  use ServiceClientBase;

  /**
   * Original thrift definition:-
   * MyI32
   *   func(1: StringWithAdapter arg1,
   *        2: string arg2,
   *        3: Foo arg3);
   */
  public async function func(\facebook\thrift\test\StringWithAdapter $arg1, string $arg2, ?\facebook\thrift\test\Foo $arg3): Awaitable<\facebook\thrift\test\MyI32> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \facebook\thrift\test\Service_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
      'arg3' => $arg3,
    ));
    await $this->asyncHandler_->genBefore("Service", "func", $args);
    $currentseqid = $this->sendImplHelper($args, "func", false);
    return await $this->genAwaitResponse(\facebook\thrift\test\Service_func_result::class, "func", false, $currentseqid, $rpc_options);
  }

}

class ServiceClient extends \ThriftClientBase implements ServiceClientIf {
  use ServiceClientBase;

  /**
   * Original thrift definition:-
   * MyI32
   *   func(1: StringWithAdapter arg1,
   *        2: string arg2,
   *        3: Foo arg3);
   */
  public async function func(\facebook\thrift\test\StringWithAdapter $arg1, string $arg2, ?\facebook\thrift\test\Foo $arg3): Awaitable<\facebook\thrift\test\MyI32> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \facebook\thrift\test\Service_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
      'arg3' => $arg3,
    ));
    await $this->asyncHandler_->genBefore("Service", "func", $args);
    $currentseqid = $this->sendImplHelper($args, "func", false);
    return await $this->genAwaitResponse(\facebook\thrift\test\Service_func_result::class, "func", false, $currentseqid, $rpc_options);
  }

  /* send and recv functions */
  public function send_func(\facebook\thrift\test\StringWithAdapter $arg1, string $arg2, ?\facebook\thrift\test\Foo $arg3): int {
    $args = \facebook\thrift\test\Service_func_args::fromShape(shape(
      'arg1' => $arg1,
      'arg2' => $arg2,
      'arg3' => $arg3,
    ));
    return $this->sendImplHelper($args, "func", false);
  }
  public function recv_func(?int $expectedsequenceid = null): \facebook\thrift\test\MyI32 {
    return $this->recvImplHelper(\facebook\thrift\test\Service_func_result::class, "func", false, $expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class Service_func_args implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'arg1',
      'adapter' => \Adapter1::class,
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'arg2',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'arg3',
      'type' => \TType::STRUCT,
      'class' => \facebook\thrift\test\Foo::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'arg1' => 1,
    'arg2' => 2,
    'arg3' => 3,
  ];

  const type TConstructorShape = shape(
    ?'arg1' => ?\facebook\thrift\test\StringWithAdapter,
    ?'arg2' => ?string,
    ?'arg3' => ?\facebook\thrift\test\Foo,
  );

  const type TShape = shape(
    'arg1' => \facebook\thrift\test\StringWithAdapter,
    'arg2' => string,
    ?'arg3' => ?\facebook\thrift\test\Foo::TShape,
  );
  const int STRUCTURAL_ID = 4977133747708930688;
  public \facebook\thrift\test\StringWithAdapter $arg1;
  public string $arg2;
  public ?\facebook\thrift\test\Foo $arg3;

  public function __construct(?\facebook\thrift\test\StringWithAdapter $arg1 = null, ?string $arg2 = null, ?\facebook\thrift\test\Foo $arg3 = null)[] {
    $this->arg1 = $arg1 ?? \Adapter1::fromThrift('');
    $this->arg2 = $arg2 ?? '';
    $this->arg3 = $arg3;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'arg1'),
      Shapes::idx($shape, 'arg2'),
      Shapes::idx($shape, 'arg3'),
    );
  }

  public function getName()[]: string {
    return 'Service_func_args';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.func_args",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.StringWithAdapter",
                      "underlyingType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                            shape(
                              "name" => "module.StringWithAdapter",
                              "underlyingType" => \tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "arg1",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "arg2",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.Foo",
                    )
                  ),
                )
              ),
              "name" => "arg3",
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
        'arg2' => shape(
          'field' => dict[
            '\facebook\thrift\annotation\cpp\Adapter' => \facebook\thrift\annotation\cpp\Adapter::fromShape(
              shape(
                "name" => "::my::Adapter2",
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['arg1'],
      $shape['arg2'],
      Shapes::idx($shape, 'arg3') === null ? null : (\facebook\thrift\test\Foo::__fromShape($shape['arg3'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'arg1' => $this->arg1,
      'arg2' => $this->arg2,
      'arg3' => $this->arg3?->__toShape(),
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

    if (idx($parsed, 'arg1') !== null) {
      $this->arg1 = HH\FIXME\UNSAFE_CAST<mixed, \facebook\thrift\test\StringWithAdapter>($parsed['arg1']);
    }
    if (idx($parsed, 'arg2') !== null) {
      $this->arg2 = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['arg2']);
    }
    if (idx($parsed, 'arg3') !== null) {
      $_tmp0 = \json_encode(HH\FIXME\UNSAFE_CAST<mixed, \facebook\thrift\test\Foo>($parsed['arg3']));
      $_tmp1 = \facebook\thrift\test\Foo::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->arg3 = $_tmp1;
    }
  }

  private static function __hackAdapterTypeChecks()[]: void {
    \ThriftUtil::requireSameType<\Adapter1::TThriftType, string>();
  }

}

class Service_func_result extends \ThriftSyncStructWithResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const type TResult = \facebook\thrift\test\MyI32;

  const \ThriftStructTypes::TSpec SPEC = dict[
    0 => shape(
      'var' => 'success',
      'adapter' => \Adapter1::class,
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 2679926375535497837;
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
    return 'Service_func_result';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Service_func_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.MyI32",
                      "underlyingType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                            shape(
                              "name" => "module.MyI32",
                              "underlyingType" => \tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
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
      $_tmp0 = (int)HH\FIXME\UNSAFE_CAST<mixed, \facebook\thrift\test\MyI32>($parsed['success']);
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->success = (int)$_tmp0;
      }
    }
  }

  private static function __hackAdapterTypeChecks()[]: void {
    \ThriftUtil::requireSameType<\Adapter1::TThriftType, int>();
  }

}

class ServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.Service",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "func",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.MyI32",
                      "underlyingType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                            shape(
                              "name" => "module.MyI32",
                              "underlyingType" => \tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
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
                        "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                          shape(
                            "name" => "module.StringWithAdapter",
                            "underlyingType" => \tmeta_ThriftType::fromShape(
                              shape(
                                "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                                  shape(
                                    "name" => "module.StringWithAdapter",
                                    "underlyingType" => \tmeta_ThriftType::fromShape(
                                      shape(
                                        "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                      )
                                    ),
                                  )
                                ),
                              )
                            ),
                          )
                        ),
                      )
                    ),
                    "name" => "arg1",
                  )
                ),
                \tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 2,
                    "type" => \tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                      )
                    ),
                    "name" => "arg2",
                  )
                ),
                \tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 3,
                    "type" => \tmeta_ThriftType::fromShape(
                      shape(
                        "t_struct" => \tmeta_ThriftStructType::fromShape(
                          shape(
                            "name" => "module.Foo",
                          )
                        ),
                      )
                    ),
                    "name" => "arg3",
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
            ],
            'structs' => dict[
              'module.Foo' => \facebook\thrift\test\Foo::getStructMetadata(),
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

