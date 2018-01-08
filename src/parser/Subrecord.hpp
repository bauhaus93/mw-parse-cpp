/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */
#pragma once

#include<iostream>
#include <cstdint>
#include <string>

#include "exception/UnexpectedSubrecordType.hpp"
#include "exception/UnexpectedSubrecordSize.hpp"
#include "logger/GlobalLogger.hpp"
#include "Read.hpp"
#include "SubrecordType.hpp"

namespace mwparse::parser {

struct SubrecordHeader {
    SubrecordType       type;
    int32_t             size;

                        SubrecordHeader(std::istream& is,
                                        SubrecordType expectedType,
                                        int32_t       expectedSize);
                        SubrecordHeader(std::istream& is,
                                        SubrecordType expectedType);
};

}   // namespace mwparse::parser
