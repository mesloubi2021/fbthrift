#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

# pyre-unsafe

import typing as __T  # sometimes `t` is used as a field name

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

__property__ = property  # sometimes `property` is used as a field name

import thrift.annotation.scope.ttypes

UTF8STRINGS: bool


class Hidden:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.python.thrift_types.Hidden": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.python.types.Hidden": ...   # type: ignore
    def _to_py_deprecated(self) -> Hidden: ...


class Flags:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.python.thrift_types.Flags": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.python.types.Flags": ...   # type: ignore
    def _to_py_deprecated(self) -> Flags: ...


class Name:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        name: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def name(self) -> str: ...
    @name.setter
    def name(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.python.thrift_types.Name": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.python.types.Name": ...   # type: ignore
    def _to_py_deprecated(self) -> Name: ...


class IOBuf:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self
    ) -> None:
        ...



    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.python.thrift_types.IOBuf": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.python.types.IOBuf": ...   # type: ignore
    def _to_py_deprecated(self) -> IOBuf: ...


class Adapter:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        name: __T.Optional[str] = ...,
        typeHint: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def name(self) -> str: ...
    @name.setter
    def name(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def typeHint(self) -> str: ...
    @typeHint.setter
    def typeHint(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    @__T.overload
    def readFromJson(self, json: __T.Dict[str, __T.Any], is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    @__T.overload
    def readFromJson(self, json: str, is_text: bool = ..., **kwargs: __T.Any) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...
    def _to_python(self) -> "facebook.thrift.annotation.python.thrift_types.Adapter": ...   # type: ignore
    def _to_py3(self) -> "facebook.thrift.annotation.python.types.Adapter": ...   # type: ignore
    def _to_py_deprecated(self) -> Adapter: ...


