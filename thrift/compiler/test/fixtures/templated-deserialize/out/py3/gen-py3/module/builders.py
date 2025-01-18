#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/templated-deserialize/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import module.types as _module_types


_fbthrift_struct_type__SmallStruct = _module_types.SmallStruct
class SmallStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__SmallStruct

    def __init__(self):
        self.small_A: _typing.Optional[bool] = None
        self.small_B: _typing.Optional[int] = None

    def __iter__(self):
        yield "small_A", self.small_A
        yield "small_B", self.small_B

_fbthrift_struct_type__containerStruct = _module_types.containerStruct
class containerStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__containerStruct

    def __init__(self):
        self.fieldA: _typing.Optional[bool] = None
        self.fieldB: _typing.Optional[dict] = None
        self.fieldC: _typing.Optional[set] = None
        self.fieldD: _typing.Optional[str] = None
        self.fieldE: _typing.Optional[str] = None
        self.fieldF: _typing.Optional[list] = None
        self.fieldG: _typing.Optional[dict] = None
        self.fieldH: _typing.Optional[list] = None
        self.fieldI: _typing.Optional[bool] = None
        self.fieldJ: _typing.Optional[dict] = None
        self.fieldK: _typing.Optional[list] = None
        self.fieldL: _typing.Optional[set] = None
        self.fieldM: _typing.Optional[dict] = None
        self.fieldN: _typing.Optional[list] = None
        self.fieldO: _typing.Optional[list] = None
        self.fieldP: _typing.Optional[list] = None
        self.fieldQ: _typing.Optional[_module_types.MyEnumA] = None
        self.fieldR: _typing.Optional[dict] = None
        self.fieldS: _typing.Any = None
        self.fieldT: _typing.Any = None
        self.fieldU: _typing.Any = None
        self.fieldX: _typing.Any = None

    def __iter__(self):
        yield "fieldA", self.fieldA
        yield "fieldB", self.fieldB
        yield "fieldC", self.fieldC
        yield "fieldD", self.fieldD
        yield "fieldE", self.fieldE
        yield "fieldF", self.fieldF
        yield "fieldG", self.fieldG
        yield "fieldH", self.fieldH
        yield "fieldI", self.fieldI
        yield "fieldJ", self.fieldJ
        yield "fieldK", self.fieldK
        yield "fieldL", self.fieldL
        yield "fieldM", self.fieldM
        yield "fieldN", self.fieldN
        yield "fieldO", self.fieldO
        yield "fieldP", self.fieldP
        yield "fieldQ", self.fieldQ
        yield "fieldR", self.fieldR
        yield "fieldS", self.fieldS
        yield "fieldT", self.fieldT
        yield "fieldU", self.fieldU
        yield "fieldX", self.fieldX

