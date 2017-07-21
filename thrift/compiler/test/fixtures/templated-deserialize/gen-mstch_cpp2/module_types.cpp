/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_data.h"



namespace cpp2 {

const _MyEnumA_EnumMapFactory::ValuesToNamesMapType _MyEnumA_VALUES_TO_NAMES = _MyEnumA_EnumMapFactory::makeValuesToNamesMap();
const _MyEnumA_EnumMapFactory::NamesToValuesMapType _MyEnumA_NAMES_TO_VALUES = _MyEnumA_EnumMapFactory::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::cpp2::MyEnumA>::size = 3;
template <> const folly::Range<const  ::cpp2::MyEnumA*> TEnumTraits< ::cpp2::MyEnumA>::values = folly::range( ::cpp2::_MyEnumAEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::cpp2::MyEnumA>::names = folly::range( ::cpp2::_MyEnumAEnumDataStorage::names);
template <> const char* TEnumTraits< ::cpp2::MyEnumA>::findName( ::cpp2::MyEnumA value) {
  static auto const map = folly::Indestructible< ::cpp2::_MyEnumA_EnumMapFactory::ValuesToNamesMapType>{ ::cpp2::_MyEnumA_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::cpp2::MyEnumA>::findValue(const char* name,  ::cpp2::MyEnumA* outValue) {
  static auto const map = folly::Indestructible< ::cpp2::_MyEnumA_EnumMapFactory::NamesToValuesMapType>{ ::cpp2::_MyEnumA_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

void SmallStruct::__clear() {
  // clear all fields
  small_A = 0;
  small_B = 0;
  __isset.__clear();
}

bool SmallStruct::operator==(const SmallStruct& rhs) const {
  if (!((small_A == rhs.small_A))) {
    return false;
  }
  if (!((small_B == rhs.small_B))) {
    return false;
  }
  return true;
}

void swap(SmallStruct& a, SmallStruct& b) {
  using ::std::swap;
  swap(a.small_A, b.small_A);
  swap(a.small_B, b.small_B);
  swap(a.__isset, b.__isset);
}

template uint32_t SmallStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SmallStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

containerStruct::containerStruct(const containerStruct& src) {
  fieldA = src.fieldA;
  __isset.fieldA = src.__isset.fieldA;
  fieldB = src.fieldB;
  __isset.fieldB = src.__isset.fieldB;
  fieldC = src.fieldC;
  __isset.fieldC = src.__isset.fieldC;
  fieldD = src.fieldD;
  __isset.fieldD = src.__isset.fieldD;
  fieldE = src.fieldE;
  __isset.fieldE = src.__isset.fieldE;
  fieldF = src.fieldF;
  __isset.fieldF = src.__isset.fieldF;
  fieldG = src.fieldG;
  __isset.fieldG = src.__isset.fieldG;
  fieldH = src.fieldH;
  __isset.fieldH = src.__isset.fieldH;
  fieldI = src.fieldI;
  __isset.fieldI = src.__isset.fieldI;
  fieldJ = src.fieldJ;
  __isset.fieldJ = src.__isset.fieldJ;
  fieldK = src.fieldK;
  __isset.fieldK = src.__isset.fieldK;
  fieldL = src.fieldL;
  __isset.fieldL = src.__isset.fieldL;
  fieldM = src.fieldM;
  __isset.fieldM = src.__isset.fieldM;
  fieldN = src.fieldN;
  __isset.fieldN = src.__isset.fieldN;
  fieldO = src.fieldO;
  __isset.fieldO = src.__isset.fieldO;
  fieldP = src.fieldP;
  __isset.fieldP = src.__isset.fieldP;
  fieldQ = src.fieldQ;
  __isset.fieldQ = src.__isset.fieldQ;
  if (src.fieldR) fieldR.reset(new std::map<std::string, bool>(*src.fieldR));
  if (src.fieldS) fieldS.reset(new  ::cpp2::SmallStruct(*src.fieldS));
  fieldT = src.fieldT;
  fieldU = src.fieldU;
  if (src.fieldX) fieldX.reset(new  ::cpp2::SmallStruct(*src.fieldX));
}

containerStruct& containerStruct::operator=(const containerStruct& src) {
  containerStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

void containerStruct::__clear() {
  // clear all fields
  fieldA = 0;
  fieldB.clear();
  fieldC.clear();
  fieldD = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  fieldE = apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring");
  fieldF.clear();
  fieldG.clear();
  fieldH.clear();
  fieldI = true;
  fieldJ.clear();
  fieldK.clear();
  fieldL.clear();
  fieldM.clear();
  fieldN.clear();
  fieldO.clear();
  fieldP.clear();
  fieldQ = static_cast< ::cpp2::MyEnumA>(0);
  fieldR.reset(new typename decltype(fieldR)::element_type());
  if (fieldS) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldS.get());
  if (fieldT) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldT.get());
  fieldU.reset();
  if (fieldX) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldX.get());
  __isset.__clear();
}

bool containerStruct::operator==(const containerStruct& rhs) const {
  if (!((fieldA == rhs.fieldA))) {
    return false;
  }
  if (!((fieldB == rhs.fieldB))) {
    return false;
  }
  if (!((fieldC == rhs.fieldC))) {
    return false;
  }
  if (!((fieldD == rhs.fieldD))) {
    return false;
  }
  if (!((fieldE == rhs.fieldE))) {
    return false;
  }
  if (!((fieldF == rhs.fieldF))) {
    return false;
  }
  if (!((fieldG == rhs.fieldG))) {
    return false;
  }
  if (!((fieldH == rhs.fieldH))) {
    return false;
  }
  if (!((fieldI == rhs.fieldI))) {
    return false;
  }
  if (!((fieldJ == rhs.fieldJ))) {
    return false;
  }
  if (!((fieldK == rhs.fieldK))) {
    return false;
  }
  if (!((fieldL == rhs.fieldL))) {
    return false;
  }
  if (!((fieldM == rhs.fieldM))) {
    return false;
  }
  if (!((fieldN == rhs.fieldN))) {
    return false;
  }
  if (!((fieldO == rhs.fieldO))) {
    return false;
  }
  if (!((fieldP == rhs.fieldP))) {
    return false;
  }
  if (!((fieldQ == rhs.fieldQ))) {
    return false;
  }
  if (!(((fieldR && rhs.fieldR && *fieldR == *rhs.fieldR) ||(!fieldR && !rhs.fieldR)))) {
    return false;
  }
  if (!(((fieldS && rhs.fieldS && *fieldS == *rhs.fieldS) ||(!fieldS && !rhs.fieldS)))) {
    return false;
  }
  if (!(((fieldT && rhs.fieldT && *fieldT == *rhs.fieldT) ||(!fieldT && !rhs.fieldT)))) {
    return false;
  }
  if (!(((fieldU && rhs.fieldU && *fieldU == *rhs.fieldU) ||(!fieldU && !rhs.fieldU)))) {
    return false;
  }
  if (!(((fieldX && rhs.fieldX && *fieldX == *rhs.fieldX) ||(!fieldX && !rhs.fieldX)))) {
    return false;
  }
  return true;
}

const std::map<std::string, bool>& containerStruct::get_fieldB() const& {
  return fieldB;
}

std::map<std::string, bool> containerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const std::set<int32_t>& containerStruct::get_fieldC() const& {
  return fieldC;
}

std::set<int32_t> containerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const std::vector<std::vector<std::vector<int32_t>>>& containerStruct::get_fieldF() const& {
  return fieldF;
}

std::vector<std::vector<std::vector<int32_t>>> containerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>& containerStruct::get_fieldG() const& {
  return fieldG;
}

std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>> containerStruct::get_fieldG() && {
  return std::move(fieldG);
}

const std::vector<std::set<int32_t>>& containerStruct::get_fieldH() const& {
  return fieldH;
}

std::vector<std::set<int32_t>> containerStruct::get_fieldH() && {
  return std::move(fieldH);
}

const std::map<std::string, std::vector<int32_t>>& containerStruct::get_fieldJ() const& {
  return fieldJ;
}

std::map<std::string, std::vector<int32_t>> containerStruct::get_fieldJ() && {
  return std::move(fieldJ);
}

const std::vector<std::vector<std::vector<std::vector<int32_t>>>>& containerStruct::get_fieldK() const& {
  return fieldK;
}

std::vector<std::vector<std::vector<std::vector<int32_t>>>> containerStruct::get_fieldK() && {
  return std::move(fieldK);
}

const std::set<std::set<std::set<bool>>>& containerStruct::get_fieldL() const& {
  return fieldL;
}

std::set<std::set<std::set<bool>>> containerStruct::get_fieldL() && {
  return std::move(fieldL);
}

const std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>& containerStruct::get_fieldM() const& {
  return fieldM;
}

std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>> containerStruct::get_fieldM() && {
  return std::move(fieldM);
}

const std::vector< ::cpp2::IndirectionA>& containerStruct::get_fieldN() const& {
  return fieldN;
}

std::vector< ::cpp2::IndirectionA> containerStruct::get_fieldN() && {
  return std::move(fieldN);
}

const std::vector< ::cpp2::IndirectionB>& containerStruct::get_fieldO() const& {
  return fieldO;
}

std::vector< ::cpp2::IndirectionB> containerStruct::get_fieldO() && {
  return std::move(fieldO);
}

const std::vector< ::cpp2::IndirectionC>& containerStruct::get_fieldP() const& {
  return fieldP;
}

std::vector< ::cpp2::IndirectionC> containerStruct::get_fieldP() && {
  return std::move(fieldP);
}

void swap(containerStruct& a, containerStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
  swap(a.fieldB, b.fieldB);
  swap(a.fieldC, b.fieldC);
  swap(a.fieldD, b.fieldD);
  swap(a.fieldE, b.fieldE);
  swap(a.fieldF, b.fieldF);
  swap(a.fieldG, b.fieldG);
  swap(a.fieldH, b.fieldH);
  swap(a.fieldI, b.fieldI);
  swap(a.fieldJ, b.fieldJ);
  swap(a.fieldK, b.fieldK);
  swap(a.fieldL, b.fieldL);
  swap(a.fieldM, b.fieldM);
  swap(a.fieldN, b.fieldN);
  swap(a.fieldO, b.fieldO);
  swap(a.fieldP, b.fieldP);
  swap(a.fieldQ, b.fieldQ);
  swap(a.fieldR, b.fieldR);
  swap(a.fieldS, b.fieldS);
  swap(a.fieldT, b.fieldT);
  swap(a.fieldU, b.fieldU);
  swap(a.fieldX, b.fieldX);
  swap(a.__isset, b.__isset);
}

template uint32_t containerStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2