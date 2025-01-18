#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers
from thrift.python.mutable_serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, RpcKind, PythonUserException

import meta.example.thrift.service.thrift_mutable_types as _fbthrift__meta__example__thrift__service__thrift_mutable_types
import meta.example.thrift.service.thrift_metadata

class EchoServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"EchoService"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"echo": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_echo),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "service.EchoService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return meta.example.thrift.service.thrift_metadata.gen_metadata_service_EchoService()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return meta.example.thrift.service.thrift_metadata._fbthrift_metadata_service_response_EchoService()



    async def echo(
            self,
            request: _fbthrift__meta__example__thrift__service__thrift_mutable_types.EchoRequest
        ) -> _fbthrift__meta__example__thrift__service__thrift_mutable_types.EchoResponse:
        raise NotImplementedError("async def echo is not implemented")

    async def _fbthrift__handler_echo(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__meta__example__thrift__service__thrift_mutable_types._fbthrift_EchoService_echo_args, args, protocol)
        try:
            value = await self.echo(args_struct.request,)
            return_struct = _fbthrift__meta__example__thrift__service__thrift_mutable_types._fbthrift_EchoService_echo_result(success=value)
        except _fbthrift__meta__example__thrift__service__thrift_mutable_types.WhisperException as e:
            return_struct = _fbthrift__meta__example__thrift__service__thrift_mutable_types._fbthrift_EchoService_echo_result(ex=e)
            buf = serialize_iobuf(return_struct, protocol)
            exp = PythonUserException('meta.example.thrift.WhisperException', str(e), buf)
            raise exp
        return serialize_iobuf(return_struct, protocol)

