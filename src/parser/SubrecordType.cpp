/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "SubrecordType.hpp"

namespace mwparse::parser {

std::ostream& operator<<(std::ostream& os, const SubrecordType& t) {
    switch (t) {
        case SubrecordType::HEDR:       os << "HEDR";           break;
        default:                        os << "UNKNOWN";        break;
    }
    return os;
}

}   // namespace mwparse::parser
