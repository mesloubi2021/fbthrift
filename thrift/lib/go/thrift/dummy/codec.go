// Autogenerated by Thrift for thrift/test/go/if/dummy.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package dummy


import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

// Premade codec specs
var (
    premadeCodecTypeSpec_byte = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "byte",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BYTE,
},

        }
    }()
    premadeCodecTypeSpec_bool = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "bool",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

        }
    }()
    premadeCodecTypeSpec_i16 = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "i16",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I16,
},

        }
    }()
    premadeCodecTypeSpec_i32 = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "i32",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
},

        }
    }()
    premadeCodecTypeSpec_i64 = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "i64",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I64,
},

        }
    }()
    premadeCodecTypeSpec_float = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "float",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_FLOAT,
},

        }
    }()
    premadeCodecTypeSpec_double = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "double",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_DOUBLE,
},

        }
    }()
    premadeCodecTypeSpec_binary = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "binary",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BINARY,
},

        }
    }()
    premadeCodecTypeSpec_string = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "string",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

        }
    }()
    premadeCodecTypeSpec_dummy_DummyStruct1 = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "dummy.DummyStruct1",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "dummy.DummyStruct1",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewDummyStruct1() },
},

        }
    }()
    premadeCodecTypeSpec_void = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "void",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_VOID,
},

        }
    }()
)

// Premade struct specs
var (
    premadeStructSpec_DummyStruct1 = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "DummyStruct1",
    ScopedName:           "dummy.DummyStruct1",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.BYTE,
            Name:                 "field1",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_byte,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.BOOL,
            Name:                 "field2",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.I16,
            Name:                 "field3",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i16,
            MustBeSetToSerialize: false,
        },        {
            ID:                   4,
            WireType:             thrift.I32,
            Name:                 "field4",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   5,
            WireType:             thrift.I64,
            Name:                 "field5",
            ReflectIndex:         4,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   6,
            WireType:             thrift.FLOAT,
            Name:                 "field6",
            ReflectIndex:         5,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_float,
            MustBeSetToSerialize: false,
        },        {
            ID:                   7,
            WireType:             thrift.DOUBLE,
            Name:                 "field7",
            ReflectIndex:         6,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: false,
        },        {
            ID:                   8,
            WireType:             thrift.STRING,
            Name:                 "field8",
            ReflectIndex:         7,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_binary,
            MustBeSetToSerialize: false,
        },        {
            ID:                   9,
            WireType:             thrift.STRING,
            Name:                 "field9",
            ReflectIndex:         8,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
        6: 5,
        7: 6,
        8: 7,
        9: 8,
    },
    FieldSpecNameToIndex: map[string]int{
        "field1": 0,
        "field2": 1,
        "field3": 2,
        "field4": 3,
        "field5": 4,
        "field6": 5,
        "field7": 6,
        "field8": 7,
        "field9": 8,
    },
}
    }()
    premadeStructSpec_reqDummyEcho = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "reqDummyEcho",
    ScopedName:           "dummy.reqDummyEcho",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "value",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "value": 0,
    },
}
    }()
    premadeStructSpec_respDummyEcho = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "respDummyEcho",
    ScopedName:           "dummy.respDummyEcho",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.STRING,
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        0: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "success": 0,
    },
}
    }()
    premadeStructSpec_reqDummyOnewayRPC = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "reqDummyOnewayRPC",
    ScopedName:           "dummy.reqDummyOnewayRPC",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "value",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "value": 0,
    },
}
    }()
    premadeStructSpec_respDummyOnewayRPC = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "respDummyOnewayRPC",
    ScopedName:           "dummy.respDummyOnewayRPC",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
)

// Premade slice of all struct specs
var premadeStructSpecs = func() []*thrift.StructSpec {
    fbthriftResults := make([]*thrift.StructSpec, 0)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_DummyStruct1)
    return fbthriftResults
}()

var premadeCodecSpecsMap = func() map[string]*thrift.TypeSpec {
    fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_byte.FullName] = premadeCodecTypeSpec_byte
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_bool.FullName] = premadeCodecTypeSpec_bool
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_i16.FullName] = premadeCodecTypeSpec_i16
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_i32.FullName] = premadeCodecTypeSpec_i32
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_i64.FullName] = premadeCodecTypeSpec_i64
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_float.FullName] = premadeCodecTypeSpec_float
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_double.FullName] = premadeCodecTypeSpec_double
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_binary.FullName] = premadeCodecTypeSpec_binary
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_dummy_DummyStruct1.FullName] = premadeCodecTypeSpec_dummy_DummyStruct1
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_void.FullName] = premadeCodecTypeSpec_void
    return fbthriftTypeSpecsMap
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMap[fullName]
}
