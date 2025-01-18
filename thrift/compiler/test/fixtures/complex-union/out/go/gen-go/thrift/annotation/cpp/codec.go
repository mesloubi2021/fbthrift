// Autogenerated by Thrift for thrift/annotation/cpp.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package cpp


import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

// Premade codec specs
var (
    premadeCodecTypeSpec_cpp_RefType = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.RefType",
            CodecEnumSpec: &thrift.CodecEnumSpec{
    ScopedName: "cpp.RefType",
},

        }
    }()
    premadeCodecTypeSpec_cpp_EnumUnderlyingType = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.EnumUnderlyingType",
            CodecEnumSpec: &thrift.CodecEnumSpec{
    ScopedName: "cpp.EnumUnderlyingType",
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
    premadeCodecTypeSpec_cpp_Name = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Name",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Name",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewName() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_Type = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Type",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Type",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewType() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_Ref = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Ref",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Ref",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewRef() },
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
    premadeCodecTypeSpec_cpp_Lazy = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Lazy",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Lazy",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewLazy() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_DisableLazyChecksum = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.DisableLazyChecksum",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.DisableLazyChecksum",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewDisableLazyChecksum() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_Adapter = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Adapter",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Adapter",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewAdapter() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_PackIsset = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.PackIsset",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.PackIsset",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewPackIsset() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_MinimizePadding = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.MinimizePadding",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.MinimizePadding",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewMinimizePadding() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.ScopedEnumAsUnionType",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.ScopedEnumAsUnionType",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewScopedEnumAsUnionType() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_FieldInterceptor = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.FieldInterceptor",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.FieldInterceptor",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewFieldInterceptor() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_UseOpEncode = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.UseOpEncode",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.UseOpEncode",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewUseOpEncode() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_EnumType = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.EnumType",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.EnumType",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewEnumType() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_Frozen2Exclude = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Frozen2Exclude",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Frozen2Exclude",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewFrozen2Exclude() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.Frozen2RequiresCompleteContainerParams",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.Frozen2RequiresCompleteContainerParams",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewFrozen2RequiresCompleteContainerParams() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.ProcessInEbThreadUnsafe",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.ProcessInEbThreadUnsafe",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewProcessInEbThreadUnsafe() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_RuntimeAnnotation = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.RuntimeAnnotation",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.RuntimeAnnotation",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewRuntimeAnnotation() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_UseCursorSerialization = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.UseCursorSerialization",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.UseCursorSerialization",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewUseCursorSerialization() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.GenerateDeprecatedHeaderClientMethods",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.GenerateDeprecatedHeaderClientMethods",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewGenerateDeprecatedHeaderClientMethods() },
},

        }
    }()
    premadeCodecTypeSpec_cpp_AllowLegacyNonOptionalRef = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "cpp.AllowLegacyNonOptionalRef",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "cpp.AllowLegacyNonOptionalRef",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewAllowLegacyNonOptionalRef() },
},

        }
    }()
)

// Premade struct specs
var (
    premadeStructSpec_Name = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Name",
    ScopedName:           "cpp.Name",
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
    premadeStructSpec_Type = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Type",
    ScopedName:           "cpp.Type",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "template",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "template": 1,
    },
}
    }()
    premadeStructSpec_Ref = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Ref",
    ScopedName:           "cpp.Ref",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "type",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_cpp_RefType,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "type": 0,
    },
}
    }()
    premadeStructSpec_Lazy = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Lazy",
    ScopedName:           "cpp.Lazy",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.BOOL,
            Name:                 "ref",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "ref": 0,
    },
}
    }()
    premadeStructSpec_DisableLazyChecksum = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "DisableLazyChecksum",
    ScopedName:           "cpp.DisableLazyChecksum",
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
    premadeStructSpec_Adapter = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Adapter",
    ScopedName:           "cpp.Adapter",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "adaptedType",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.STRING,
            Name:                 "underlyingName",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   4,
            WireType:             thrift.STRING,
            Name:                 "extraNamespace",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   5,
            WireType:             thrift.BOOL,
            Name:                 "moveOnly",
            ReflectIndex:         4,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "adaptedType": 1,
        "underlyingName": 2,
        "extraNamespace": 3,
        "moveOnly": 4,
    },
}
    }()
    premadeStructSpec_PackIsset = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "PackIsset",
    ScopedName:           "cpp.PackIsset",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.BOOL,
            Name:                 "atomic",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "atomic": 0,
    },
}
    }()
    premadeStructSpec_MinimizePadding = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "MinimizePadding",
    ScopedName:           "cpp.MinimizePadding",
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
    premadeStructSpec_ScopedEnumAsUnionType = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "ScopedEnumAsUnionType",
    ScopedName:           "cpp.ScopedEnumAsUnionType",
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
    premadeStructSpec_FieldInterceptor = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "FieldInterceptor",
    ScopedName:           "cpp.FieldInterceptor",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.BOOL,
            Name:                 "noinline",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "noinline": 1,
    },
}
    }()
    premadeStructSpec_UseOpEncode = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "UseOpEncode",
    ScopedName:           "cpp.UseOpEncode",
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
    premadeStructSpec_EnumType = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "EnumType",
    ScopedName:           "cpp.EnumType",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "type",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_cpp_EnumUnderlyingType,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "type": 0,
    },
}
    }()
    premadeStructSpec_Frozen2Exclude = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Frozen2Exclude",
    ScopedName:           "cpp.Frozen2Exclude",
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
    premadeStructSpec_Frozen2RequiresCompleteContainerParams = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Frozen2RequiresCompleteContainerParams",
    ScopedName:           "cpp.Frozen2RequiresCompleteContainerParams",
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
    premadeStructSpec_ProcessInEbThreadUnsafe = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "ProcessInEbThreadUnsafe",
    ScopedName:           "cpp.ProcessInEbThreadUnsafe",
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
    premadeStructSpec_RuntimeAnnotation = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "RuntimeAnnotation",
    ScopedName:           "cpp.RuntimeAnnotation",
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
    premadeStructSpec_UseCursorSerialization = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "UseCursorSerialization",
    ScopedName:           "cpp.UseCursorSerialization",
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
    premadeStructSpec_GenerateDeprecatedHeaderClientMethods = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "GenerateDeprecatedHeaderClientMethods",
    ScopedName:           "cpp.GenerateDeprecatedHeaderClientMethods",
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
    premadeStructSpec_AllowLegacyNonOptionalRef = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "AllowLegacyNonOptionalRef",
    ScopedName:           "cpp.AllowLegacyNonOptionalRef",
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
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Name)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Type)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Ref)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Lazy)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_DisableLazyChecksum)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Adapter)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_PackIsset)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_MinimizePadding)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_ScopedEnumAsUnionType)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_FieldInterceptor)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_UseOpEncode)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_EnumType)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Frozen2Exclude)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Frozen2RequiresCompleteContainerParams)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_ProcessInEbThreadUnsafe)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_RuntimeAnnotation)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_UseCursorSerialization)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_GenerateDeprecatedHeaderClientMethods)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_AllowLegacyNonOptionalRef)
    return fbthriftResults
}()

var premadeCodecSpecsMap = func() map[string]*thrift.TypeSpec {
    fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_RefType.FullName] = premadeCodecTypeSpec_cpp_RefType
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_EnumUnderlyingType.FullName] = premadeCodecTypeSpec_cpp_EnumUnderlyingType
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Name.FullName] = premadeCodecTypeSpec_cpp_Name
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Type.FullName] = premadeCodecTypeSpec_cpp_Type
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Ref.FullName] = premadeCodecTypeSpec_cpp_Ref
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_bool.FullName] = premadeCodecTypeSpec_bool
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Lazy.FullName] = premadeCodecTypeSpec_cpp_Lazy
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_DisableLazyChecksum.FullName] = premadeCodecTypeSpec_cpp_DisableLazyChecksum
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Adapter.FullName] = premadeCodecTypeSpec_cpp_Adapter
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_PackIsset.FullName] = premadeCodecTypeSpec_cpp_PackIsset
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_MinimizePadding.FullName] = premadeCodecTypeSpec_cpp_MinimizePadding
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType.FullName] = premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_FieldInterceptor.FullName] = premadeCodecTypeSpec_cpp_FieldInterceptor
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_UseOpEncode.FullName] = premadeCodecTypeSpec_cpp_UseOpEncode
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_EnumType.FullName] = premadeCodecTypeSpec_cpp_EnumType
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Frozen2Exclude.FullName] = premadeCodecTypeSpec_cpp_Frozen2Exclude
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams.FullName] = premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe.FullName] = premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_RuntimeAnnotation.FullName] = premadeCodecTypeSpec_cpp_RuntimeAnnotation
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_UseCursorSerialization.FullName] = premadeCodecTypeSpec_cpp_UseCursorSerialization
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods.FullName] = premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_AllowLegacyNonOptionalRef.FullName] = premadeCodecTypeSpec_cpp_AllowLegacyNonOptionalRef
    return fbthriftTypeSpecsMap
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMap[fullName]
}
