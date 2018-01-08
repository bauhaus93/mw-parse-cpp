/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "SubrecordType.hpp"

namespace mwparse::parser {

SubrecordType SubrecordTypeFromString(const std::string& s) {
    if (s == "HEDR")
        return SubrecordType::HEDR;
    if (s == "NAME")
        return SubrecordType::NAME;
    if (s == "DATA")
        return SubrecordType::DATA;
    if (s == "RGNN")
        return SubrecordType::RGNN;
    if (s == "NAM0")
        return SubrecordType::NAM0;
    return SubrecordType::UNKNOWN;
}

std::ostream& operator<<(std::ostream& os, const SubrecordType& t) {
    switch (t) {
        case SubrecordType::HEDR:       os << "HEDR";       break;
        case SubrecordType::NAME:       os << "NAME";       break;
        case SubrecordType::DATA:       os << "DATA";       break;
        case SubrecordType::RGNN:       os << "RGNN";       break;
        case SubrecordType::NAM0:       os << "NAM0";       break;
        default:                        os << "UNKNOWN";    break;
    }
    return os;
}

}   // namespace mwparse::parser
