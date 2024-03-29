/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Subrecord.hpp"


namespace mwparse::parser {

SubrecordHeader::SubrecordHeader(std::istream& is,
                                 SubrecordType expectedType,
                                 int32_t       expectedSize):
    type { SubrecordType::UNKNOWN },
    size { 0 } {
    if (is.eof()) {
        throw ParseException(__FUNCTION__, "EOF reached");
    }

    try {
        std::string name = ReadString(is, 4);
        type = SubrecordTypeFromString(name);
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

SubrecordHeader::SubrecordHeader(std::istream& is,
                                 SubrecordType expectedType):
    type { SubrecordType::UNKNOWN },
    size { 0 } {
    if (is.eof()) {
        throw ParseException(__FUNCTION__, "EOF reached");
    }

    try {
        std::string name = ReadString(is, 4);
        type = SubrecordTypeFromString(name);
        size = Read<int32_t>(is);

        if (size < 0)
            WARN("subrecord with negative size: name = ", name,
                 ", size = ", size);
        else
            TRACE("subrecord =", name, ", size = ", size);
    }
    catch (const std::ios_base::failure& e) {
        throw ParseException(__FUNCTION__, "IO Error", e);
    }

    if (type != expectedType)
        throw UnexpectedSubrecordType(__FUNCTION__, type, expectedType);
}

}   // namespace mwparse::parser
