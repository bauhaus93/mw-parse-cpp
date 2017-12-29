/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "RecordType.hpp"

namespace mwparse::parser {

RecordType GetRecordTypeFromString(const std::string& str) {

    if (str == "TES3")
        return RecordType::TES3;
    else if ( str == "CELL")
        return RecordType::CELL;
    else
        return RecordType::UNKNOWN;
}


std::ostream& operator<<(std::ostream& os, const RecordType& t) {
    switch(t) {
        case RecordType::TES3:  os << "TES3";           break;
        case RecordType::CELL:  os << "CELL";           break;
        default:                os << "UNKNOWN";        break;
    }
    return os;
}

}   // mwparse::parser
