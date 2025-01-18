// Autogenerated by Thrift for module0.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module0


import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

// Premade codec specs
var (
    premadeCodecTypeSpec_i32 = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "i32",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
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
    premadeCodecTypeSpec_module0_Accessory = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "module0.Accessory",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module0.Accessory",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewAccessory() },
},

        }
    }()
    premadeCodecTypeSpec_module0_PartName = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "module0.PartName",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "module0.PartName",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewPartName() },
},

        }
    }()
)

// Premade struct specs
var (
    premadeStructSpec_Accessory = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Accessory",
    ScopedName:           "module0.Accessory",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "InventoryId",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "Name",
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
        "InventoryId": 0,
        "Name": 1,
    },
}
    }()
    premadeStructSpec_PartName = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "PartName",
    ScopedName:           "module0.PartName",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "InventoryId",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "Name",
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
        "InventoryId": 0,
        "Name": 1,
    },
}
    }()
)

// Premade slice of all struct specs
var premadeStructSpecs = func() []*thrift.StructSpec {
    fbthriftResults := make([]*thrift.StructSpec, 0)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Accessory)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_PartName)
    return fbthriftResults
}()

var premadeCodecSpecsMap = func() map[string]*thrift.TypeSpec {
    fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_i32.FullName] = premadeCodecTypeSpec_i32
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_module0_Accessory.FullName] = premadeCodecTypeSpec_module0_Accessory
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_module0_PartName.FullName] = premadeCodecTypeSpec_module0_PartName
    return fbthriftTypeSpecsMap
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMap[fullName]
}
