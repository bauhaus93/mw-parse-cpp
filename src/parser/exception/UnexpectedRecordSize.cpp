/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "UnexpectedRecordSize.hpp"

namespace mwparse::parser {


static std::string CreateMsgString(int32_t found, int32_t expected) {
    std::stringstream s;

    s << "Unexpected record size: found " << found
      << ", but expected " << expected;
    return s.str();
}

UnexpectedRecordSize::UnexpectedRecordSize(
    const std::string& function,
    int32_t found,
    int32_t expected):
    ParseException { function, CreateMsgString(found, expected) } {
}



}    // namespace mwparse::parser
