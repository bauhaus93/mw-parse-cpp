/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "UnexpectedSubrecordSize.hpp"

namespace mwparse::parser {


static std::string CreateMsgString(int32_t found, int32_t expected) {
    std::stringstream s;

    s << "Unexpected subrecord size: found " << found
      << ", but expected " << expected;
    return s.str();
}

UnexpectedSubrecordSize::UnexpectedSubrecordSize(
    const std::string& function,
    int32_t found,
    int32_t expected):
    ParseException { function, CreateMsgString(found, expected) } {
}



}    // namespace mwparse::parser
