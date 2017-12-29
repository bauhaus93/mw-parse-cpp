/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>

namespace mwparse::parser {

enum class SubrecordType {
    UNKNOWN,
    HEDR
};

std::ostream& operator<<(std::ostream& os, const SubrecordType& t);

}    // mwparse::parser
