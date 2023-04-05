<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace thrift\annotation\hack;

/**
 * Original thrift struct:-
 * FieldWrapper
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/FieldWrapper'))>>
class FieldWrapper implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
  );

  const type TShape = shape(
    'name' => string,
  );
  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  public function __construct(?string $name = null)[] {
    $this->name = $name ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName()[]: string {
    return 'FieldWrapper';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.FieldWrapper",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['name'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'name' => $this->name,
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

    if (idx($parsed, 'name') !== null) {
      $this->name = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['name']);
    }
  }

}

/**
 * Original thrift struct:-
 * Wrapper
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/Wrapper'))>>
class Wrapper implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'underlyingName',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'extraNamespace',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
    'underlyingName' => 2,
    'extraNamespace' => 3,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
    ?'underlyingName' => ?string,
    ?'extraNamespace' => ?string,
  );

  const type TShape = shape(
    'name' => string,
    'underlyingName' => string,
    'extraNamespace' => string,
  );
  const int STRUCTURAL_ID = 1284986773698322040;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;
  /**
   * Original thrift field:-
   * 2: string underlyingName
   */
  public string $underlyingName;
  /**
   * Original thrift field:-
   * 3: string extraNamespace
   */
  public string $extraNamespace;

  public function __construct(?string $name = null, ?string $underlyingName = null, ?string $extraNamespace = null)[] {
    $this->name = $name ?? '';
    $this->underlyingName = $underlyingName ?? '';
    $this->extraNamespace = $extraNamespace ?? "thrift_adapted_types";
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'underlyingName'),
      Shapes::idx($shape, 'extraNamespace'),
    );
  }

  public function getName()[]: string {
    return 'Wrapper';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.Wrapper",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
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
              "name" => "underlyingName",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "extraNamespace",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Typedef' => \thrift\annotation\Typedef::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['name'],
      $shape['underlyingName'],
      $shape['extraNamespace'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'name' => $this->name,
      'underlyingName' => $this->underlyingName,
      'extraNamespace' => $this->extraNamespace,
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

    if (idx($parsed, 'name') !== null) {
      $this->name = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['name']);
    }
    if (idx($parsed, 'underlyingName') !== null) {
      $this->underlyingName = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['underlyingName']);
    }
    if (idx($parsed, 'extraNamespace') !== null) {
      $this->extraNamespace = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['extraNamespace']);
    }
  }

}

/**
 * Original thrift struct:-
 * Adapter
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/Adapter'))>>
class Adapter implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
  );

  const type TShape = shape(
    'name' => string,
  );
  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  public function __construct(?string $name = null)[] {
    $this->name = $name ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName()[]: string {
    return 'Adapter';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.Adapter",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Typedef' => \thrift\annotation\Typedef::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['name'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'name' => $this->name,
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

    if (idx($parsed, 'name') !== null) {
      $this->name = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['name']);
    }
  }

}

/**
 * Original thrift struct:-
 * SkipCodegen
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/SkipCodegen'))>>
class SkipCodegen implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'reason',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reason' => 1,
  ];

  const type TConstructorShape = shape(
    ?'reason' => ?string,
  );

  const type TShape = shape(
    'reason' => string,
  );
  const int STRUCTURAL_ID = 3707764047816594739;
  /**
   * Original thrift field:-
   * 1: string reason
   */
  public string $reason;

  public function __construct(?string $reason = null)[] {
    $this->reason = $reason ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reason'),
    );
  }

  public function getName()[]: string {
    return 'SkipCodegen';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.SkipCodegen",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "reason",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\TFunction' => \thrift\annotation\TFunction::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['reason'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'reason' => $this->reason,
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

    if (idx($parsed, 'reason') !== null) {
      $this->reason = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['reason']);
    }
  }

}

/**
 * Original thrift struct:-
 * Name
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/Name'))>>
class Name implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'reason',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
    'reason' => 2,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
    ?'reason' => ?string,
  );

  const type TShape = shape(
    'name' => string,
    'reason' => string,
  );
  const int STRUCTURAL_ID = 4844827548325959202;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;
  /**
   * Original thrift field:-
   * 2: string reason
   */
  public string $reason;

  public function __construct(?string $name = null, ?string $reason = null)[] {
    $this->name = $name ?? '';
    $this->reason = $reason ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'reason'),
    );
  }

  public function getName()[]: string {
    return 'Name';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.Name",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
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
              "name" => "reason",
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
      $shape['name'],
      $shape['reason'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'name' => $this->name,
      'reason' => $this->reason,
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

    if (idx($parsed, 'name') !== null) {
      $this->name = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['name']);
    }
    if (idx($parsed, 'reason') !== null) {
      $this->reason = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['reason']);
    }
  }

}

/**
 * Original thrift struct:-
 * UnionEnumAttributes
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/UnionEnumAttributes'))>>
class UnionEnumAttributes implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'attributes',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'attributes' => 1,
  ];

  const type TConstructorShape = shape(
    ?'attributes' => ?Vector<string>,
  );

  const type TShape = shape(
    'attributes' => vec<string>,
  );
  const int STRUCTURAL_ID = 4379867690114498379;
  /**
   * Original thrift field:-
   * 1: list<string> attributes
   */
  public Vector<string> $attributes;

  public function __construct(?Vector<string> $attributes = null)[] {
    $this->attributes = $attributes ?? Vector {};
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'attributes'),
    );
  }

  public function getName()[]: string {
    return 'UnionEnumAttributes';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.UnionEnumAttributes",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => \tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "attributes",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Union' => \thrift\annotation\Union::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      (new Vector($shape['attributes'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'attributes' => vec($this->attributes),
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

    if (idx($parsed, 'attributes') !== null) {
      $_json3 = HH\FIXME\UNSAFE_CAST<mixed, Vector<string>>($parsed['attributes']);
      $_container4 = Vector {};
      foreach($_json3 as $_key1 => $_value2) {
        $_elem5 = '';
        $_elem5 = $_value2;
        $_container4 []= $_elem5;
      }
      $this->attributes = $_container4;
    }
  }

}

/**
 * Original thrift struct:-
 * StructTrait
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/StructTrait'))>>
class StructTrait implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
  );

  const type TShape = shape(
    'name' => string,
  );
  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  public function __construct(?string $name = null)[] {
    $this->name = $name ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName()[]: string {
    return 'StructTrait';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.StructTrait",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Union' => \thrift\annotation\Union::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Exception' => \thrift\annotation\Exception::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['name'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'name' => $this->name,
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

    if (idx($parsed, 'name') !== null) {
      $this->name = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['name']);
    }
  }

}

/**
 * Original thrift struct:-
 * Attributes
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/Attributes'))>>
class Attributes implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'attributes',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'attributes' => 1,
  ];

  const type TConstructorShape = shape(
    ?'attributes' => ?Vector<string>,
  );

  const type TShape = shape(
    'attributes' => vec<string>,
  );
  const int STRUCTURAL_ID = 4379867690114498379;
  /**
   * Original thrift field:-
   * 1: list<string> attributes
   */
  public Vector<string> $attributes;

  public function __construct(?Vector<string> $attributes = null)[] {
    $this->attributes = $attributes ?? Vector {};
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'attributes'),
    );
  }

  public function getName()[]: string {
    return 'Attributes';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.Attributes",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => \tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "attributes",
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
      (new Vector($shape['attributes'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'attributes' => vec($this->attributes),
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

    if (idx($parsed, 'attributes') !== null) {
      $_json3 = HH\FIXME\UNSAFE_CAST<mixed, Vector<string>>($parsed['attributes']);
      $_container4 = Vector {};
      foreach($_json3 as $_key1 => $_value2) {
        $_elem5 = '';
        $_elem5 = $_value2;
        $_container4 []= $_elem5;
      }
      $this->attributes = $_container4;
    }
  }

}

/**
 * Original thrift struct:-
 * StructAsTrait
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/StructAsTrait'))>>
class StructAsTrait implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'StructAsTrait';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.StructAsTrait",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Union' => \thrift\annotation\Union::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Exception' => \thrift\annotation\Exception::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
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

  }

}

/**
 * Original thrift struct:-
 * ModuleInternal
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/hack/ModuleInternal'))>>
class ModuleInternal implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'ModuleInternal';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "hack.ModuleInternal",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Union' => \thrift\annotation\Union::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Enum' => \thrift\annotation\Enum::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Typedef' => \thrift\annotation\Typedef::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\TFunction' => \thrift\annotation\TFunction::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Service' => \thrift\annotation\Service::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
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

  }

}

