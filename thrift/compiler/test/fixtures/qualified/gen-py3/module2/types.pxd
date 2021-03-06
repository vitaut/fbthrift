#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport bstring, move
from folly.optional cimport cOptional
cimport module0.types as _module0_types
cimport module1.types as _module1_types





cdef extern from "src/gen-cpp2/module2_types_custom_protocol.h" namespace "module2":
    # Forward Declaration
    cdef cppclass cStruct "module2::Struct"
    # Forward Declaration
    cdef cppclass cBigStruct "module2::BigStruct"

cdef extern from "src/gen-cpp2/module2_types.h" namespace "module2":
    cdef cppclass cStruct__isset "module2::Struct::__isset":
        bint first
        bint second

    cdef cppclass cStruct "module2::Struct":
        cStruct() except +
        cStruct(const cStruct&) except +
        bint operator==(cStruct&)
        bint operator<(cStruct&)
        bint operator>(cStruct&)
        bint operator<=(cStruct&)
        bint operator>=(cStruct&)
        _module0_types.cStruct first
        _module1_types.cStruct second
        cStruct__isset __isset

    cdef cppclass cBigStruct__isset "module2::BigStruct::__isset":
        bint s
        bint id

    cdef cppclass cBigStruct "module2::BigStruct":
        cBigStruct() except +
        cBigStruct(const cBigStruct&) except +
        bint operator==(cBigStruct&)
        bint operator<(cBigStruct&)
        bint operator>(cBigStruct&)
        bint operator<=(cBigStruct&)
        bint operator>=(cBigStruct&)
        cStruct s
        int32_t id
        cBigStruct__isset __isset

    cdef shared_ptr[_module0_types.cStruct] reference_shared_ptr_first "thrift::py3::reference_shared_ptr<module0::Struct>"(shared_ptr[cStruct]&, _module0_types.cStruct&)
    cdef shared_ptr[_module1_types.cStruct] reference_shared_ptr_second "thrift::py3::reference_shared_ptr<module1::Struct>"(shared_ptr[cStruct]&, _module1_types.cStruct&)
    cdef shared_ptr[cStruct] reference_shared_ptr_s "thrift::py3::reference_shared_ptr<module2::Struct>"(shared_ptr[cBigStruct]&, cStruct&)

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cStruct] move(unique_ptr[cStruct])
    cdef shared_ptr[cStruct] move_shared "std::move"(shared_ptr[cStruct])
    cdef unique_ptr[cStruct] move_unique "std::move"(unique_ptr[cStruct])
    cdef shared_ptr[cBigStruct] move(unique_ptr[cBigStruct])
    cdef shared_ptr[cBigStruct] move_shared "std::move"(shared_ptr[cBigStruct])
    cdef unique_ptr[cBigStruct] move_unique "std::move"(unique_ptr[cBigStruct])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cStruct] const_pointer_cast "std::const_pointer_cast<const module2::Struct>"(shared_ptr[cStruct])
    cdef shared_ptr[const cBigStruct] const_pointer_cast "std::const_pointer_cast<const module2::BigStruct>"(shared_ptr[cBigStruct])

# Forward Definition of the cython struct
cdef class Struct(thrift.py3.types.Struct)


cdef class Struct(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cStruct] _cpp_obj
    cdef _module0_types.Struct __first
    cdef _module1_types.Struct __second

    @staticmethod
    cdef unique_ptr[cStruct] _make_instance(
        cStruct* base_instance,
        object first,
        object second
    ) except *

    @staticmethod
    cdef create(shared_ptr[cStruct])

# Forward Definition of the cython struct
cdef class BigStruct(thrift.py3.types.Struct)


cdef class BigStruct(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cBigStruct] _cpp_obj
    cdef Struct __s

    @staticmethod
    cdef unique_ptr[cBigStruct] _make_instance(
        cBigStruct* base_instance,
        object s,
        object id
    ) except *

    @staticmethod
    cdef create(shared_ptr[cBigStruct])





cdef extern from "src/gen-cpp2/module2_constants.h" namespace "module2":
    cdef cStruct cc2 "module2::module2_constants::c2"()
    cdef cStruct cc3 "module2::module2_constants::c3"()
    cdef cStruct cc4 "module2::module2_constants::c4"()
