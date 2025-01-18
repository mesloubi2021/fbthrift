#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/params/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import module.types as _module_types

_NestedContainersInterfaceT = _typing.TypeVar('_NestedContainersInterfaceT', bound='NestedContainersInterface')


class NestedContainersInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):


    @abstractmethod
    async def mapList(
        self,
        foo: _typing.Mapping[int, _typing.Sequence[int]]
    ) -> None: ...


    @abstractmethod
    async def mapSet(
        self,
        foo: _typing.Mapping[int, _typing.AbstractSet[int]]
    ) -> None: ...


    @abstractmethod
    async def listMap(
        self,
        foo: _typing.Sequence[_typing.Mapping[int, int]]
    ) -> None: ...


    @abstractmethod
    async def listSet(
        self,
        foo: _typing.Sequence[_typing.AbstractSet[int]]
    ) -> None: ...


    @abstractmethod
    async def turtles(
        self,
        foo: _typing.Sequence[_typing.Sequence[_typing.Mapping[int, _typing.Mapping[int, _typing.AbstractSet[int]]]]]
    ) -> None: ...
    pass


