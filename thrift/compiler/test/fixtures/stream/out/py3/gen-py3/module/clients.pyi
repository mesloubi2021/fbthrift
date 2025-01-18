#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/stream/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.client
import thrift.py3.common
import typing as _typing
from types import TracebackType

import module.types as _module_types


_PubSubStreamingServiceT = _typing.TypeVar('_PubSubStreamingServiceT', bound='PubSubStreamingService')


class PubSubStreamingService(thrift.py3.client.Client):

    async def returnstream(
        self,
        i32_from: int,
        i32_to: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ClientBufferedStream__i32: ...

    async def streamthrows(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ClientBufferedStream__i32: ...

    async def servicethrows(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ClientBufferedStream__i32: ...

    async def servicethrows2(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ClientBufferedStream__i32: ...

    async def boththrows(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ClientBufferedStream__i32: ...

    async def responseandstreamstreamthrows(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ResponseAndClientBufferedStream__i32_i32: ...

    async def responseandstreamservicethrows(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ResponseAndClientBufferedStream__i32_i32: ...

    async def responseandstreamboththrows(
        self,
        foo: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ResponseAndClientBufferedStream__i32_i32: ...

    async def returnstreamFast(
        self,
        i32_from: int,
        i32_to: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> _module_types.ClientBufferedStream__i32: ...

