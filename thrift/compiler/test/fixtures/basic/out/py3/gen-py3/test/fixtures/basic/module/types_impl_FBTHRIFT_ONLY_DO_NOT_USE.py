#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import enum
import thrift.py3.types
import test.fixtures.basic.module.thrift_metadata

_fbthrift__module_name__ = "test.fixtures.basic.module.types"



class MyEnum(thrift.py3.types.CompiledEnum):
    MyValue1 = 0
    MyValue2 = 1

    __module__ = _fbthrift__module_name__
    __slots__ = ()

    @staticmethod
    def __get_metadata__():
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_enum_MyEnum()

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.basic.module.thrift_types"
        )
        return python_types.MyEnum(self._fbthrift_value_)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self._fbthrift_value_

    def __int__(self):
        return self._fbthrift_value_

    def __index__(self):
        return self._fbthrift_value_




class HackEnum(thrift.py3.types.CompiledEnum):
    Value1 = 0
    Value2 = 1

    __module__ = _fbthrift__module_name__
    __slots__ = ()

    @staticmethod
    def __get_metadata__():
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_enum_HackEnum()

    @staticmethod
    def __get_thrift_name__():
        return "module.HackEnum"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.basic.module.thrift_types"
        )
        return python_types.HackEnum(self._fbthrift_value_)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self._fbthrift_value_

    def __int__(self):
        return self._fbthrift_value_

    def __index__(self):
        return self._fbthrift_value_





class __MyUnionType(enum.Enum):
    myEnum = 1
    myStruct = 2
    myDataItem = 3
    floatSet = 4
    EMPTY = 0

    __module__ = _fbthrift__module_name__
    __slots__ = ()


class __UnionToBeRenamedType(enum.Enum):
    reserved_field = 1
    EMPTY = 0

    __module__ = _fbthrift__module_name__
    __slots__ = ()

