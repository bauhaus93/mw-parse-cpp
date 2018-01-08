/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <string>
#include <sstream>
#include <exception>

#include "ParseException.hpp"

namespace mwparse::parser {

class UnexpectedRecordSize: public ParseException {
 public:
        UnexpectedRecordSize(const std::string& function,
                                int32_t found,
                                int32_t expected);
};


}   // namespace mwparse::parser
