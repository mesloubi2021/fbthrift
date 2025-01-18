#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/sink/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import module.types as _module_types


_fbthrift_struct_type__InitialResponse = _module_types.InitialResponse
class InitialResponse_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__InitialResponse

    def __init__(self):
        self.content: _typing.Optional[str] = None

    def __iter__(self):
        yield "content", self.content

_fbthrift_struct_type__FinalResponse = _module_types.FinalResponse
class FinalResponse_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__FinalResponse

    def __init__(self):
        self.content: _typing.Optional[str] = None

    def __iter__(self):
        yield "content", self.content

_fbthrift_struct_type__SinkPayload = _module_types.SinkPayload
class SinkPayload_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__SinkPayload

    def __init__(self):
        self.content: _typing.Optional[str] = None

    def __iter__(self):
        yield "content", self.content

_fbthrift_struct_type__CompatibleWithKeywordSink = _module_types.CompatibleWithKeywordSink
class CompatibleWithKeywordSink_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__CompatibleWithKeywordSink

    def __init__(self):
        self.sink: _typing.Optional[str] = None

    def __iter__(self):
        yield "sink", self.sink

_fbthrift_struct_type__InitialException = _module_types.InitialException
class InitialException_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__InitialException

    def __init__(self):
        self.reason: _typing.Optional[str] = None

    def __iter__(self):
        yield "reason", self.reason

_fbthrift_struct_type__SinkException1 = _module_types.SinkException1
class SinkException1_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__SinkException1

    def __init__(self):
        self.reason: _typing.Optional[str] = None

    def __iter__(self):
        yield "reason", self.reason

_fbthrift_struct_type__SinkException2 = _module_types.SinkException2
class SinkException2_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__SinkException2

    def __init__(self):
        self.reason: _typing.Optional[int] = None

    def __iter__(self):
        yield "reason", self.reason

