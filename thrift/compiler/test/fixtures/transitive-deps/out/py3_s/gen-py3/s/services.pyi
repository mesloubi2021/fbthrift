#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/transitive-deps/src/s.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import s.types as _s_types
import b.types as _b_types
import c.types as _c_types

_TestServiceInterfaceT = _typing.TypeVar('_TestServiceInterfaceT', bound='TestServiceInterface')


class TestServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):


    @abstractmethod
    async def test(
        self
    ) -> None: ...
    pass


