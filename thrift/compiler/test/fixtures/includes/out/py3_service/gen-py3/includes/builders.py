#
# Autogenerated by Thrift for includes.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder

import transitive.types as _transitive_types

import includes.types as _includes_types


_fbthrift_struct_type__Included = _includes_types.Included
class Included_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__Included

    def __init__(self):
        self.MyIntField: _typing.Optional[int] = None
        self.MyTransitiveField: _typing.Any = None

    def __iter__(self):
        yield "MyIntField", self.MyIntField
        yield "MyTransitiveField", self.MyTransitiveField

