#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import module.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos



class FooStreamEx(metaclass=_fbthrift_python_mutable_exceptions.MutableGeneratedErrorMeta):
    _fbthrift_SPEC = (
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.FooStreamEx


    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FooStreamEx"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("module.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.FooStreamEx, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FooStreamEx, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.FooStreamEx, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.FooStreamEx, self)
_fbthrift_FooStreamEx = FooStreamEx

class FooEx(metaclass=_fbthrift_python_mutable_exceptions.MutableGeneratedErrorMeta):
    _fbthrift_SPEC = (
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.FooEx


    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FooEx"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("module.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.FooEx, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FooEx, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.FooEx, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.FooEx, self)
_fbthrift_FooEx = FooEx

class FooEx2(metaclass=_fbthrift_python_mutable_exceptions.MutableGeneratedErrorMeta):
    _fbthrift_SPEC = (
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.FooEx2


    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FooEx2"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("module.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.FooEx2, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FooEx2, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.FooEx2, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.FooEx2, self)
_fbthrift_FooEx2 = FooEx2


_fbthrift_all_enums = [
]


_fbthrift_all_structs = [
    FooStreamEx,
    FooEx,
    FooEx2,
]
_fbthrift_python_mutable_types.fill_specs(*_fbthrift_all_structs)



class _fbthrift_PubSubStreamingService_returnstream_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i32_from",  # name
            "i32_from",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i32_to",  # name
            "i32_to",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_returnstream_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_PubSubStreamingService_returnstream_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_PubSubStreamingService_streamthrows_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_streamthrows_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_PubSubStreamingService_streamthrows_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooStreamEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_servicethrows_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_servicethrows_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_servicethrows_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_PubSubStreamingService_servicethrows2_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_servicethrows2_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e1",  # name
            "e1",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e2",  # name
            "e2",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooEx2),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_servicethrows2_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_PubSubStreamingService_boththrows_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_boththrows_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_boththrows_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooStreamEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamstreamthrows_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamstreamthrows_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamstreamthrows_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooStreamEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamservicethrows_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamservicethrows_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamservicethrows_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamboththrows_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "foo",  # name
            "foo",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamboththrows_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_responseandstreamboththrows_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "e",  # name
            "e",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(FooStreamEx),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_returnstreamFast_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i32_from",  # name
            "i32_from",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i32_to",  # name
            "i32_to",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_PubSubStreamingService_returnstreamFast_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_PubSubStreamingService_returnstreamFast_result_stream(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )



_fbthrift_python_mutable_types.fill_specs(
    _fbthrift_PubSubStreamingService_returnstream_args,
    _fbthrift_PubSubStreamingService_returnstream_result,
    _fbthrift_PubSubStreamingService_returnstream_result_stream,
    _fbthrift_PubSubStreamingService_streamthrows_args,
    _fbthrift_PubSubStreamingService_streamthrows_result,
    _fbthrift_PubSubStreamingService_streamthrows_result_stream,
    _fbthrift_PubSubStreamingService_servicethrows_args,
    _fbthrift_PubSubStreamingService_servicethrows_result,
    _fbthrift_PubSubStreamingService_servicethrows_result_stream,
    _fbthrift_PubSubStreamingService_servicethrows2_args,
    _fbthrift_PubSubStreamingService_servicethrows2_result,
    _fbthrift_PubSubStreamingService_servicethrows2_result_stream,
    _fbthrift_PubSubStreamingService_boththrows_args,
    _fbthrift_PubSubStreamingService_boththrows_result,
    _fbthrift_PubSubStreamingService_boththrows_result_stream,
    _fbthrift_PubSubStreamingService_responseandstreamstreamthrows_args,
    _fbthrift_PubSubStreamingService_responseandstreamstreamthrows_result,
    _fbthrift_PubSubStreamingService_responseandstreamstreamthrows_result_stream,
    _fbthrift_PubSubStreamingService_responseandstreamservicethrows_args,
    _fbthrift_PubSubStreamingService_responseandstreamservicethrows_result,
    _fbthrift_PubSubStreamingService_responseandstreamservicethrows_result_stream,
    _fbthrift_PubSubStreamingService_responseandstreamboththrows_args,
    _fbthrift_PubSubStreamingService_responseandstreamboththrows_result,
    _fbthrift_PubSubStreamingService_responseandstreamboththrows_result_stream,
    _fbthrift_PubSubStreamingService_returnstreamFast_args,
    _fbthrift_PubSubStreamingService_returnstreamFast_result,
    _fbthrift_PubSubStreamingService_returnstreamFast_result_stream,
)
