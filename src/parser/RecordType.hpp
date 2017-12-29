/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

namespace mwparse::parser {

enum class RecordType {
    UNKNOWN,
    TES3,
    CELL
};

RecordType GetRecordTypeFromString(const std::string& str);
std::ostream& operator<<(std::ostream& os, const RecordType& t);

}   // mwparse::parser

