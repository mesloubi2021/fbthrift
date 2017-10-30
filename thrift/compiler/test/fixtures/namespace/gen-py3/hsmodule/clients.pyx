#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector as vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception, raise_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
import thrift.py3.client
cimport thrift.py3.client
from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport cython

import asyncio
import sys
import traceback

cimport hsmodule.types
import hsmodule.types

from hsmodule.clients_wrapper cimport cHsTestServiceAsyncClient, cHsTestServiceClientWrapper


cdef void HsTestService_init_callback(
    cFollyTry[int64_t]&& result,
    PyObject* future
):
    cdef object pyfuture = <object> future
    if result.hasException():
        try:
            raise_py_exception(result.exception())
        except Exception as ex:
            pyfuture.set_exception(ex)
    else:
        pyfuture.set_result(result.value())


cdef class HsTestService(thrift.py3.client.Client):

    def __cinit__(HsTestService self):
        loop = asyncio.get_event_loop()
        self._deferred_headers = {}
        self._connect_future = loop.create_future()
        self._executor = get_executor()

    cdef const type_info* _typeid(HsTestService self):
        return &typeid(cHsTestServiceAsyncClient)

    @staticmethod
    cdef _hsmodule_HsTestService_set_client(HsTestService inst, shared_ptr[cHsTestServiceClientWrapper] c_obj):
        """So the class hierarchy talks to the correct pointer type"""
        inst._hsmodule_HsTestService_client = c_obj

    cdef _hsmodule_HsTestService_reset_client(HsTestService self):
        """So the class hierarchy resets the shared pointer up the chain"""
        self._hsmodule_HsTestService_client.reset()

    def __dealloc__(HsTestService self):
        if self._cRequestChannel or self._hsmodule_HsTestService_client:
            print('client was not cleaned up, use the context manager', file=sys.stderr)

    async def __aenter__(HsTestService self):
        await self._connect_future
        if self._cRequestChannel:
            HsTestService._hsmodule_HsTestService_set_client(
                self,
                makeClientWrapper[cHsTestServiceAsyncClient, cHsTestServiceClientWrapper](
                    self._cRequestChannel
                ),
            )
            self._cRequestChannel.reset()
        else:
            raise asyncio.InvalidStateError('Client context has been used already')
        for key, value in self._deferred_headers.items():
            self.set_persistent_header(key, value)
        self._deferred_headers = None
        return self

    async def __aexit__(HsTestService self, *exc):
        self._check_connect_future()
        loop = asyncio.get_event_loop()
        future = loop.create_future()
        bridgeFutureWith[cFollyUnit](
            self._executor,
            deref(self._hsmodule_HsTestService_client).disconnect(),
            closed_HsTestService_py3_client_callback,
            <PyObject *>future
        )
        # To break any future usage of this client
        badfuture = loop.create_future()
        badfuture.set_exception(asyncio.InvalidStateError('Client Out of Context'))
        badfuture.exception()
        self._connect_future = badfuture
        await future
        self._hsmodule_HsTestService_reset_client()

    def set_persistent_header(HsTestService self, str key, str value):
        if not self._hsmodule_HsTestService_client:
            self._deferred_headers[key] = value
            return

        cdef string ckey = <bytes> key.encode('utf-8')
        cdef string cvalue = <bytes> value.encode('utf-8')
        deref(self._hsmodule_HsTestService_client).setPersistentHeader(ckey, cvalue)

    @cython.always_allow_keywords(True)
    async def init(
            HsTestService self,
            int1):
        self._check_connect_future()
        __loop = asyncio.get_event_loop()
        __future = __loop.create_future()
        bridgeFutureWith[int64_t](
            self._executor,
            deref(self._hsmodule_HsTestService_client).init(
                int1,
            ),
            HsTestService_init_callback,
            <PyObject *> __future
        )
        return await __future



cdef void closed_HsTestService_py3_client_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* fut,
):
    cdef object pyfuture = <object> fut
    pyfuture.set_result(None)
