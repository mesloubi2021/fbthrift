// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	meta0 "thrift/annotation/meta"
	foo1 "foo"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = meta0.GoUnusedProtection__
var _ = foo1.GoUnusedProtection__
var GoUnusedProtection__ int;

// Attributes:
//  - InjectedField
type Fields struct {
  // unused fields # 1 to 99
  InjectedField string `thrift:"injected_field,100" db:"injected_field" json:"injected_field"`
}

func NewFields() *Fields {
  return &Fields{}
}


func (p *Fields) GetInjectedField() string {
  return p.InjectedField
}
type FieldsBuilder struct {
  obj *Fields
}

func NewFieldsBuilder() *FieldsBuilder{
  return &FieldsBuilder{
    obj: NewFields(),
  }
}

func (p FieldsBuilder) Emit() *Fields{
  return &Fields{
    InjectedField: p.obj.InjectedField,
  }
}

func (f *FieldsBuilder) InjectedField(injectedField string) *FieldsBuilder {
  f.obj.InjectedField = injectedField
  return f
}

func (f *Fields) SetInjectedField(injectedField string) *Fields {
  f.InjectedField = injectedField
  return f
}

func (p *Fields) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 100:
      if err := p.ReadField100(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Fields)  ReadField100(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 100: ", err)
  } else {
    p.InjectedField = v
  }
  return nil
}

func (p *Fields) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Fields"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField100(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Fields) writeField100(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("injected_field", thrift.STRING, 100); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 100:injected_field: ", p), err) }
  if err := oprot.WriteString(string(p.InjectedField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.injected_field (100) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 100:injected_field: ", p), err) }
  return err
}

func (p *Fields) String() string {
  if p == nil {
    return "<nil>"
  }

  injectedFieldVal := fmt.Sprintf("%v", p.InjectedField)
  return fmt.Sprintf("Fields({InjectedField:%s})", injectedFieldVal)
}

// Attributes:
//  - InjectedField
type FieldsInjectedToEmptyStruct struct {
  // unused fields # 1 to 99
  InjectedField string `thrift:"injected_field,100" db:"injected_field" json:"injected_field"`
}

func NewFieldsInjectedToEmptyStruct() *FieldsInjectedToEmptyStruct {
  return &FieldsInjectedToEmptyStruct{}
}


func (p *FieldsInjectedToEmptyStruct) GetInjectedField() string {
  return p.InjectedField
}
type FieldsInjectedToEmptyStructBuilder struct {
  obj *FieldsInjectedToEmptyStruct
}

func NewFieldsInjectedToEmptyStructBuilder() *FieldsInjectedToEmptyStructBuilder{
  return &FieldsInjectedToEmptyStructBuilder{
    obj: NewFieldsInjectedToEmptyStruct(),
  }
}

func (p FieldsInjectedToEmptyStructBuilder) Emit() *FieldsInjectedToEmptyStruct{
  return &FieldsInjectedToEmptyStruct{
    InjectedField: p.obj.InjectedField,
  }
}

func (f *FieldsInjectedToEmptyStructBuilder) InjectedField(injectedField string) *FieldsInjectedToEmptyStructBuilder {
  f.obj.InjectedField = injectedField
  return f
}

func (f *FieldsInjectedToEmptyStruct) SetInjectedField(injectedField string) *FieldsInjectedToEmptyStruct {
  f.InjectedField = injectedField
  return f
}

func (p *FieldsInjectedToEmptyStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 100:
      if err := p.ReadField100(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FieldsInjectedToEmptyStruct)  ReadField100(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 100: ", err)
  } else {
    p.InjectedField = v
  }
  return nil
}

func (p *FieldsInjectedToEmptyStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("FieldsInjectedToEmptyStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField100(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FieldsInjectedToEmptyStruct) writeField100(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("injected_field", thrift.STRING, 100); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 100:injected_field: ", p), err) }
  if err := oprot.WriteString(string(p.InjectedField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.injected_field (100) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 100:injected_field: ", p), err) }
  return err
}

func (p *FieldsInjectedToEmptyStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  injectedFieldVal := fmt.Sprintf("%v", p.InjectedField)
  return fmt.Sprintf("FieldsInjectedToEmptyStruct({InjectedField:%s})", injectedFieldVal)
}

// Attributes:
//  - StringField
//  - InjectedField
type FieldsInjectedToStruct struct {
  StringField string `thrift:"string_field,1" db:"string_field" json:"string_field"`
  // unused fields # 2 to 99
  InjectedField string `thrift:"injected_field,100" db:"injected_field" json:"injected_field"`
}

func NewFieldsInjectedToStruct() *FieldsInjectedToStruct {
  return &FieldsInjectedToStruct{}
}


func (p *FieldsInjectedToStruct) GetStringField() string {
  return p.StringField
}

func (p *FieldsInjectedToStruct) GetInjectedField() string {
  return p.InjectedField
}
type FieldsInjectedToStructBuilder struct {
  obj *FieldsInjectedToStruct
}

func NewFieldsInjectedToStructBuilder() *FieldsInjectedToStructBuilder{
  return &FieldsInjectedToStructBuilder{
    obj: NewFieldsInjectedToStruct(),
  }
}

func (p FieldsInjectedToStructBuilder) Emit() *FieldsInjectedToStruct{
  return &FieldsInjectedToStruct{
    StringField: p.obj.StringField,
    InjectedField: p.obj.InjectedField,
  }
}

func (f *FieldsInjectedToStructBuilder) StringField(stringField string) *FieldsInjectedToStructBuilder {
  f.obj.StringField = stringField
  return f
}

func (f *FieldsInjectedToStructBuilder) InjectedField(injectedField string) *FieldsInjectedToStructBuilder {
  f.obj.InjectedField = injectedField
  return f
}

func (f *FieldsInjectedToStruct) SetStringField(stringField string) *FieldsInjectedToStruct {
  f.StringField = stringField
  return f
}

func (f *FieldsInjectedToStruct) SetInjectedField(injectedField string) *FieldsInjectedToStruct {
  f.InjectedField = injectedField
  return f
}

func (p *FieldsInjectedToStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 100:
      if err := p.ReadField100(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FieldsInjectedToStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.StringField = v
  }
  return nil
}

func (p *FieldsInjectedToStruct)  ReadField100(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 100: ", err)
  } else {
    p.InjectedField = v
  }
  return nil
}

func (p *FieldsInjectedToStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("FieldsInjectedToStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField100(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FieldsInjectedToStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("string_field", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:string_field: ", p), err) }
  if err := oprot.WriteString(string(p.StringField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.string_field (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:string_field: ", p), err) }
  return err
}

func (p *FieldsInjectedToStruct) writeField100(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("injected_field", thrift.STRING, 100); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 100:injected_field: ", p), err) }
  if err := oprot.WriteString(string(p.InjectedField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.injected_field (100) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 100:injected_field: ", p), err) }
  return err
}

func (p *FieldsInjectedToStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  stringFieldVal := fmt.Sprintf("%v", p.StringField)
  injectedFieldVal := fmt.Sprintf("%v", p.InjectedField)
  return fmt.Sprintf("FieldsInjectedToStruct({StringField:%s InjectedField:%s})", stringFieldVal, injectedFieldVal)
}

// Attributes:
//  - StringField
//  - InjectedField
//  - InjectedStructuredAnnotationField
//  - InjectedUnstructuredAnnotationField
type FieldsInjectedWithIncludedStruct struct {
  StringField string `thrift:"string_field,1" db:"string_field" json:"string_field"`
  // unused fields # 2 to 99
  InjectedField string `thrift:"injected_field,100" db:"injected_field" json:"injected_field"`
  InjectedStructuredAnnotationField *string `thrift:"injected_structured_annotation_field,101,optional" db:"injected_structured_annotation_field" json:"injected_structured_annotation_field,omitempty"`
  InjectedUnstructuredAnnotationField *string `thrift:"injected_unstructured_annotation_field,102,optional" db:"injected_unstructured_annotation_field" json:"injected_unstructured_annotation_field,omitempty"`
}

func NewFieldsInjectedWithIncludedStruct() *FieldsInjectedWithIncludedStruct {
  return &FieldsInjectedWithIncludedStruct{}
}


func (p *FieldsInjectedWithIncludedStruct) GetStringField() string {
  return p.StringField
}

func (p *FieldsInjectedWithIncludedStruct) GetInjectedField() string {
  return p.InjectedField
}
var FieldsInjectedWithIncludedStruct_InjectedStructuredAnnotationField_DEFAULT string
func (p *FieldsInjectedWithIncludedStruct) GetInjectedStructuredAnnotationField() string {
  if !p.IsSetInjectedStructuredAnnotationField() {
    return FieldsInjectedWithIncludedStruct_InjectedStructuredAnnotationField_DEFAULT
  }
return *p.InjectedStructuredAnnotationField
}
var FieldsInjectedWithIncludedStruct_InjectedUnstructuredAnnotationField_DEFAULT string
func (p *FieldsInjectedWithIncludedStruct) GetInjectedUnstructuredAnnotationField() string {
  if !p.IsSetInjectedUnstructuredAnnotationField() {
    return FieldsInjectedWithIncludedStruct_InjectedUnstructuredAnnotationField_DEFAULT
  }
return *p.InjectedUnstructuredAnnotationField
}
func (p *FieldsInjectedWithIncludedStruct) IsSetInjectedStructuredAnnotationField() bool {
  return p != nil && p.InjectedStructuredAnnotationField != nil
}

func (p *FieldsInjectedWithIncludedStruct) IsSetInjectedUnstructuredAnnotationField() bool {
  return p != nil && p.InjectedUnstructuredAnnotationField != nil
}

type FieldsInjectedWithIncludedStructBuilder struct {
  obj *FieldsInjectedWithIncludedStruct
}

func NewFieldsInjectedWithIncludedStructBuilder() *FieldsInjectedWithIncludedStructBuilder{
  return &FieldsInjectedWithIncludedStructBuilder{
    obj: NewFieldsInjectedWithIncludedStruct(),
  }
}

func (p FieldsInjectedWithIncludedStructBuilder) Emit() *FieldsInjectedWithIncludedStruct{
  return &FieldsInjectedWithIncludedStruct{
    StringField: p.obj.StringField,
    InjectedField: p.obj.InjectedField,
    InjectedStructuredAnnotationField: p.obj.InjectedStructuredAnnotationField,
    InjectedUnstructuredAnnotationField: p.obj.InjectedUnstructuredAnnotationField,
  }
}

func (f *FieldsInjectedWithIncludedStructBuilder) StringField(stringField string) *FieldsInjectedWithIncludedStructBuilder {
  f.obj.StringField = stringField
  return f
}

func (f *FieldsInjectedWithIncludedStructBuilder) InjectedField(injectedField string) *FieldsInjectedWithIncludedStructBuilder {
  f.obj.InjectedField = injectedField
  return f
}

func (f *FieldsInjectedWithIncludedStructBuilder) InjectedStructuredAnnotationField(injectedStructuredAnnotationField *string) *FieldsInjectedWithIncludedStructBuilder {
  f.obj.InjectedStructuredAnnotationField = injectedStructuredAnnotationField
  return f
}

func (f *FieldsInjectedWithIncludedStructBuilder) InjectedUnstructuredAnnotationField(injectedUnstructuredAnnotationField *string) *FieldsInjectedWithIncludedStructBuilder {
  f.obj.InjectedUnstructuredAnnotationField = injectedUnstructuredAnnotationField
  return f
}

func (f *FieldsInjectedWithIncludedStruct) SetStringField(stringField string) *FieldsInjectedWithIncludedStruct {
  f.StringField = stringField
  return f
}

func (f *FieldsInjectedWithIncludedStruct) SetInjectedField(injectedField string) *FieldsInjectedWithIncludedStruct {
  f.InjectedField = injectedField
  return f
}

func (f *FieldsInjectedWithIncludedStruct) SetInjectedStructuredAnnotationField(injectedStructuredAnnotationField *string) *FieldsInjectedWithIncludedStruct {
  f.InjectedStructuredAnnotationField = injectedStructuredAnnotationField
  return f
}

func (f *FieldsInjectedWithIncludedStruct) SetInjectedUnstructuredAnnotationField(injectedUnstructuredAnnotationField *string) *FieldsInjectedWithIncludedStruct {
  f.InjectedUnstructuredAnnotationField = injectedUnstructuredAnnotationField
  return f
}

func (p *FieldsInjectedWithIncludedStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 100:
      if err := p.ReadField100(iprot); err != nil {
        return err
      }
    case 101:
      if err := p.ReadField101(iprot); err != nil {
        return err
      }
    case 102:
      if err := p.ReadField102(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FieldsInjectedWithIncludedStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.StringField = v
  }
  return nil
}

func (p *FieldsInjectedWithIncludedStruct)  ReadField100(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 100: ", err)
  } else {
    p.InjectedField = v
  }
  return nil
}

func (p *FieldsInjectedWithIncludedStruct)  ReadField101(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 101: ", err)
  } else {
    p.InjectedStructuredAnnotationField = &v
  }
  return nil
}

func (p *FieldsInjectedWithIncludedStruct)  ReadField102(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 102: ", err)
  } else {
    p.InjectedUnstructuredAnnotationField = &v
  }
  return nil
}

func (p *FieldsInjectedWithIncludedStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("FieldsInjectedWithIncludedStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField100(oprot); err != nil { return err }
  if err := p.writeField101(oprot); err != nil { return err }
  if err := p.writeField102(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FieldsInjectedWithIncludedStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("string_field", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:string_field: ", p), err) }
  if err := oprot.WriteString(string(p.StringField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.string_field (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:string_field: ", p), err) }
  return err
}

func (p *FieldsInjectedWithIncludedStruct) writeField100(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("injected_field", thrift.STRING, 100); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 100:injected_field: ", p), err) }
  if err := oprot.WriteString(string(p.InjectedField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.injected_field (100) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 100:injected_field: ", p), err) }
  return err
}

func (p *FieldsInjectedWithIncludedStruct) writeField101(oprot thrift.Protocol) (err error) {
  if p.IsSetInjectedStructuredAnnotationField() {
    if err := oprot.WriteFieldBegin("injected_structured_annotation_field", thrift.STRING, 101); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 101:injected_structured_annotation_field: ", p), err) }
    if err := oprot.WriteString(string(*p.InjectedStructuredAnnotationField)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.injected_structured_annotation_field (101) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 101:injected_structured_annotation_field: ", p), err) }
  }
  return err
}

func (p *FieldsInjectedWithIncludedStruct) writeField102(oprot thrift.Protocol) (err error) {
  if p.IsSetInjectedUnstructuredAnnotationField() {
    if err := oprot.WriteFieldBegin("injected_unstructured_annotation_field", thrift.STRING, 102); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 102:injected_unstructured_annotation_field: ", p), err) }
    if err := oprot.WriteString(string(*p.InjectedUnstructuredAnnotationField)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.injected_unstructured_annotation_field (102) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 102:injected_unstructured_annotation_field: ", p), err) }
  }
  return err
}

func (p *FieldsInjectedWithIncludedStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  stringFieldVal := fmt.Sprintf("%v", p.StringField)
  injectedFieldVal := fmt.Sprintf("%v", p.InjectedField)
  var injectedStructuredAnnotationFieldVal string
  if p.InjectedStructuredAnnotationField == nil {
    injectedStructuredAnnotationFieldVal = "<nil>"
  } else {
    injectedStructuredAnnotationFieldVal = fmt.Sprintf("%v", *p.InjectedStructuredAnnotationField)
  }
  var injectedUnstructuredAnnotationFieldVal string
  if p.InjectedUnstructuredAnnotationField == nil {
    injectedUnstructuredAnnotationFieldVal = "<nil>"
  } else {
    injectedUnstructuredAnnotationFieldVal = fmt.Sprintf("%v", *p.InjectedUnstructuredAnnotationField)
  }
  return fmt.Sprintf("FieldsInjectedWithIncludedStruct({StringField:%s InjectedField:%s InjectedStructuredAnnotationField:%s InjectedUnstructuredAnnotationField:%s})", stringFieldVal, injectedFieldVal, injectedStructuredAnnotationFieldVal, injectedUnstructuredAnnotationFieldVal)
}

