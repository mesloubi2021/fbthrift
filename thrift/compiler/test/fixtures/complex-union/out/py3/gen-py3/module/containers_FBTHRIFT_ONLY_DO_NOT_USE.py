#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-union/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import importlib
from collections.abc import Mapping, Sequence, Set

"""
    This is a helper module to define py3 container types.
    All types defined here are re-exported in the parent `.types` module.
    Only `import` types defined here via the parent `.types` module.
    If you `import` them directly from here, you will get nasty import errors.
"""

_fbthrift__module_name__ = "module.types"

import module.types as _module_types

def get_types_reflection():
    return importlib.import_module(
        "module.types_reflection"
    )

__all__ = []

class List__i64(thrift.py3.types.List):
    __module__ = _fbthrift__module_name__
    __slots__ = ()

    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__i64):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__i64._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__i64)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, int)
        ):
            raise TypeError(f"{item!r} is not of type int")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, int):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__i64()


Sequence.register(List__i64)

__all__.append('List__i64')


class List__string(thrift.py3.types.List):
    __module__ = _fbthrift__module_name__
    __slots__ = ()

    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__string):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
            check_method = List__string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, str)
        ):
            raise TypeError(f"{item!r} is not of type str")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, str):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__string()


Sequence.register(List__string)

__all__.append('List__string')


class Map__i16_string(thrift.py3.types.Map):
    __module__ = _fbthrift__module_name__
    __slots__ = ()

    _FBTHRIFT_USE_SORTED_REPR = True

    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_map_private_ctor:
            _py_obj = items
        elif isinstance(items, Map__i16_string):
            _py_obj = dict(items)
        elif items is None:
            _py_obj = dict()
        else:
            check_key = Map__i16_string._check_key_type_or_raise
            check_val = Map__i16_string._check_val_type_or_raise
            _py_obj = {check_key(k) : check_val(v) for k, v in items.items()}

        super().__init__(_py_obj, Map__i16_string)

    @staticmethod
    def _check_key_type_or_raise(key):
        if not (
            isinstance(key, int)
        ):
            raise TypeError(f"{key!r} is not of type int")
        return key

    @staticmethod
    def _check_key_type_or_none(key):
        if key is None:
            return None
        if isinstance(key, int):
            return key

    @staticmethod
    def _check_val_type_or_raise(item):
        if not (
            isinstance(item, str)
        ):
            raise TypeError(f"{item!r} is not of type str")
        return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Map__i16_string()


Mapping.register(Map__i16_string)
__all__.append('Map__i16_string')


