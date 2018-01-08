/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <string>
#include <sstream>
#include <exception>

#include "ParseException.hpp"
#include "RecordType.hpp"

namespace mwparse::parser {

class UnexpectedRecordType: public ParseException {
 public:
        UnexpectedRecordType(const std::string& function,
                                RecordType found,
                                RecordType expected);
};

}   // namespace mwparse::parser
