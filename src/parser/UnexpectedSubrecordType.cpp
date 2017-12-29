/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "UnexpectedSubrecordType.hpp"

namespace mwparse::parser {

static std::string CreateMsgString(SubrecordType found, SubrecordType expected) {
    std::stringstream s;

    s << "Unexpected subrecord type: found " << found
      << ", but expected " << expected;
    return s.str();

}

UnexpectedSubrecordType::UnexpectedSubrecordType(
    const std::string& function,
    SubrecordType found,
    SubrecordType expected):
    ParseException { function, CreateMsgString(found, expected) } {
}



}    // mwparse::parser
