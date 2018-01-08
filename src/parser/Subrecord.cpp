/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Subrecord.hpp"


namespace mwparse::parser {

SubrecordHeader::SubrecordHeader(std::istream& is,
                                 SubrecordType expectedType,
                                 int32_t       expectedSize):
    type { SubrecordType::UNKNOWN },
    size { 0 } {
    if (is.eof()) {
        throw ParseException("ReadSubrecord", "EOF reached");
    }

    try {
        std::string name = ReadString(is, 4);
        if (name == "HEDR")
            type = SubrecordType::HEDR;
        size = Read<int32_t>(is);
        TRACE("subrecord =", name, ", size = ", size);
    }
    catch (const std::ios_base::failure& e) {
        throw ParseException(__FUNCTION__, "IO Error", e);
    }

    if (type != expectedType)
        throw UnexpectedSubrecordType(__FUNCTION__, type, expectedType);

    if (size != expectedSize)
        throw UnexpectedSubrecordSize(__FUNCTION__, size, expectedSize);
}

}   // namespace mwparse::parser
