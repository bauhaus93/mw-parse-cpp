/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>

namespace mwparse::parser {

enum class SubrecordType {
    UNKNOWN,
    HEDR,
    NAME,
    DATA,
    RGNN,
    NAM0
};

SubrecordType SubrecordTypeFromString(const std::string& s);
std::ostream& operator<<(std::ostream& os, const SubrecordType& t);

}    // mwparse::parser
