// Autogenerated by Thrift for thrift/annotation/rust.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package rust

import (
    "fmt"
    "reflect"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO

type Name struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Name)(nil)

func NewName() *Name {
    return (&Name{}).setDefaults()
}

func (x *Name) GetName() string {
    return x.Name
}

func (x *Name) SetNameNonCompat(value string) *Name {
    x.Name = value
    return x
}

func (x *Name) SetName(value string) *Name {
    x.Name = value
    return x
}

func (x *Name) writeField1(p thrift.Encoder) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Name) readField1(p thrift.Decoder) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Name = result
    return nil
}



func (x *Name) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Name"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Name) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Name) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Name) setDefaults() *Name {
    return x.
        SetNameNonCompat("")
}

type Copy struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Copy)(nil)

func NewCopy() *Copy {
    return (&Copy{}).setDefaults()
}



func (x *Copy) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Copy"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Copy) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Copy) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Copy) setDefaults() *Copy {
    return x
}

type RequestContext struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*RequestContext)(nil)

func NewRequestContext() *RequestContext {
    return (&RequestContext{}).setDefaults()
}



func (x *RequestContext) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("RequestContext"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *RequestContext) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *RequestContext) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *RequestContext) setDefaults() *RequestContext {
    return x
}

type Arc struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Arc)(nil)

func NewArc() *Arc {
    return (&Arc{}).setDefaults()
}



func (x *Arc) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Arc"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Arc) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Arc) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Arc) setDefaults() *Arc {
    return x
}

type Box struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Box)(nil)

func NewBox() *Box {
    return (&Box{}).setDefaults()
}



func (x *Box) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Box"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Box) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Box) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Box) setDefaults() *Box {
    return x
}

type Exhaustive struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Exhaustive)(nil)

func NewExhaustive() *Exhaustive {
    return (&Exhaustive{}).setDefaults()
}



func (x *Exhaustive) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Exhaustive"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Exhaustive) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Exhaustive) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Exhaustive) setDefaults() *Exhaustive {
    return x
}

type Ord struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Ord)(nil)

func NewOrd() *Ord {
    return (&Ord{}).setDefaults()
}



func (x *Ord) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Ord"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Ord) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Ord) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Ord) setDefaults() *Ord {
    return x
}

type NewType_ struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*NewType_)(nil)

func NewNewType_() *NewType_ {
    return (&NewType_{}).setDefaults()
}



func (x *NewType_) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("NewType"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *NewType_) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *NewType_) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *NewType_) setDefaults() *NewType_ {
    return x
}

type Type struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Type)(nil)

func NewType() *Type {
    return (&Type{}).setDefaults()
}

func (x *Type) GetName() string {
    return x.Name
}

func (x *Type) SetNameNonCompat(value string) *Type {
    x.Name = value
    return x
}

func (x *Type) SetName(value string) *Type {
    x.Name = value
    return x
}

func (x *Type) writeField1(p thrift.Encoder) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Type) readField1(p thrift.Decoder) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Name = result
    return nil
}



func (x *Type) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Type"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Type) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Type) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Type) setDefaults() *Type {
    return x.
        SetNameNonCompat("")
}

type Serde struct {
    Enabled bool `thrift:"enabled,1" json:"enabled" db:"enabled"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Serde)(nil)

func NewSerde() *Serde {
    return (&Serde{}).setDefaults()
}

func (x *Serde) GetEnabled() bool {
    return x.Enabled
}

func (x *Serde) SetEnabledNonCompat(value bool) *Serde {
    x.Enabled = value
    return x
}

func (x *Serde) SetEnabled(value bool) *Serde {
    x.Enabled = value
    return x
}

func (x *Serde) writeField1(p thrift.Encoder) error {  // Enabled
    if err := p.WriteFieldBegin("enabled", thrift.BOOL, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Enabled
    if err := p.WriteBool(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Serde) readField1(p thrift.Decoder) error {  // Enabled
    result, err := p.ReadBool()
if err != nil {
    return err
}

    x.Enabled = result
    return nil
}



func (x *Serde) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Serde"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Serde) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.BOOL)):  // enabled
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Serde) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Serde) setDefaults() *Serde {
    return x.
        SetEnabledNonCompat(false)
}

type Mod struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Mod)(nil)

func NewMod() *Mod {
    return (&Mod{}).setDefaults()
}

func (x *Mod) GetName() string {
    return x.Name
}

func (x *Mod) SetNameNonCompat(value string) *Mod {
    x.Name = value
    return x
}

func (x *Mod) SetName(value string) *Mod {
    x.Name = value
    return x
}

func (x *Mod) writeField1(p thrift.Encoder) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Mod) readField1(p thrift.Decoder) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Name = result
    return nil
}



func (x *Mod) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Mod"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Mod) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Mod) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Mod) setDefaults() *Mod {
    return x.
        SetNameNonCompat("")
}

type Adapter struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Adapter)(nil)

func NewAdapter() *Adapter {
    return (&Adapter{}).setDefaults()
}

func (x *Adapter) GetName() string {
    return x.Name
}

func (x *Adapter) SetNameNonCompat(value string) *Adapter {
    x.Name = value
    return x
}

func (x *Adapter) SetName(value string) *Adapter {
    x.Name = value
    return x
}

func (x *Adapter) writeField1(p thrift.Encoder) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Adapter) readField1(p thrift.Decoder) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.Name = result
    return nil
}



func (x *Adapter) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Adapter"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Adapter) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRING)):  // name
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Adapter) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Adapter) setDefaults() *Adapter {
    return x.
        SetNameNonCompat("")
}

type Derive struct {
    Derives []string `thrift:"derives,1" json:"derives" db:"derives"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Derive)(nil)

func NewDerive() *Derive {
    return (&Derive{}).setDefaults()
}

func (x *Derive) GetDerives() []string {
    if !x.IsSetDerives() {
        return make([]string, 0)
    }
    return x.Derives
}

func (x *Derive) SetDerivesNonCompat(value []string) *Derive {
    x.Derives = value
    return x
}

func (x *Derive) SetDerives(value []string) *Derive {
    x.Derives = value
    return x
}

func (x *Derive) IsSetDerives() bool {
    return x != nil && x.Derives != nil
}

func (x *Derive) writeField1(p thrift.Encoder) error {  // Derives
    if err := p.WriteFieldBegin("derives", thrift.LIST, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Derives
    if err := p.WriteListBegin(thrift.STRING, len(item)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteString(item); err != nil {
    return err
}
    }
}
if err := p.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Derive) readField1(p thrift.Decoder) error {  // Derives
    _ /* elemType */, size, err := p.ReadListBegin()
if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
}

listResult := make([]string, 0, size)
for i := 0; i < size; i++ {
    var elem string
    {
        result, err := p.ReadString()
if err != nil {
    return err
}
        elem = result
    }
    listResult = append(listResult, elem)
}

if err := p.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
}
result := listResult

    x.Derives = result
    return nil
}



func (x *Derive) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Derive"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Derive) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.LIST)):  // derives
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Derive) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Derive) setDefaults() *Derive {
    return x.
        SetDerivesNonCompat(make([]string, 0))
}

type ServiceExn struct {
    AnyhowToApplicationExn bool `thrift:"anyhow_to_application_exn,1" json:"anyhow_to_application_exn" db:"anyhow_to_application_exn"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*ServiceExn)(nil)

func NewServiceExn() *ServiceExn {
    return (&ServiceExn{}).setDefaults()
}

func (x *ServiceExn) GetAnyhowToApplicationExn() bool {
    return x.AnyhowToApplicationExn
}

func (x *ServiceExn) SetAnyhowToApplicationExnNonCompat(value bool) *ServiceExn {
    x.AnyhowToApplicationExn = value
    return x
}

func (x *ServiceExn) SetAnyhowToApplicationExn(value bool) *ServiceExn {
    x.AnyhowToApplicationExn = value
    return x
}

func (x *ServiceExn) writeField1(p thrift.Encoder) error {  // AnyhowToApplicationExn
    if err := p.WriteFieldBegin("anyhow_to_application_exn", thrift.BOOL, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.AnyhowToApplicationExn
    if err := p.WriteBool(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *ServiceExn) readField1(p thrift.Decoder) error {  // AnyhowToApplicationExn
    result, err := p.ReadBool()
if err != nil {
    return err
}

    x.AnyhowToApplicationExn = result
    return nil
}



func (x *ServiceExn) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("ServiceExn"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *ServiceExn) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.BOOL)):  // anyhow_to_application_exn
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *ServiceExn) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *ServiceExn) setDefaults() *ServiceExn {
    return x.
        SetAnyhowToApplicationExnNonCompat(false)
}



// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("facebook.com/thrift/annotation/rust/Name", func() any { return NewName() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Copy", func() any { return NewCopy() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/RequestContext", func() any { return NewRequestContext() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Arc", func() any { return NewArc() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Box", func() any { return NewBox() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Exhaustive", func() any { return NewExhaustive() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Ord", func() any { return NewOrd() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/NewType", func() any { return NewNewType_() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Type", func() any { return NewType() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Serde", func() any { return NewSerde() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Mod", func() any { return NewMod() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Adapter", func() any { return NewAdapter() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/Derive", func() any { return NewDerive() })
    registry.RegisterType("facebook.com/thrift/annotation/rust/ServiceExn", func() any { return NewServiceExn() })

}
