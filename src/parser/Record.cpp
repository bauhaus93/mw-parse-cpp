/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Record.hpp"

namespace mwparse::parser {


RecordHeader::RecordHeader(std::istream& is):
    type { RecordType::UNKNOWN },
    size { 0 },
    unknown { 0 },
    flags { 0 } {

    if (is.eof()) {
        throw ParseException(__FUNCTION__, "EOF reached");
    }

    try {
        std::string name = ReadString(is, 4);
        type = GetRecordTypeFromString(name);
        size = Read<int32_t>(is);
        unknown = Read<int32_t>(is);
        flags = Read<int32_t>(is);
        TRACE("record = ", name, ", size = ", size);

    }
    catch (const std::ios_base::failure& e) {
        throw ParseException(__FUNCTION__, "IO Error", e);
    }
}


}   // mwparse::parser

