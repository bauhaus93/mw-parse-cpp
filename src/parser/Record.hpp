/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <cstdint>
#include <memory>

#include "parser/ParseException.hpp"
#include "logger/GlobalLogger.hpp"

#include "Read.hpp"
#include "RecordType.hpp"

namespace mwparse::parser {

struct RecordHeader {

    RecordType          type;
    int32_t             size;
    int32_t             unknown;
    int32_t             flags; 

                        RecordHeader(std::istream& is);
};

}   // mwparse::parser

