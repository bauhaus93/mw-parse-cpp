/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "UnexpectedRecordType.hpp"

namespace mwparse::parser {

static std::string CreateMsgString(RecordType found, RecordType expected) {
    std::stringstream s;

    s << "Unexpected record type: found " << found
      << ", but expected " << expected;
    return s.str();

}

UnexpectedRecordType::UnexpectedRecordType(
    const std::string& function,
    RecordType found,
    RecordType expected):
    ParseException { function, CreateMsgString(found, expected) } {
}



}    // mwparse::parser
