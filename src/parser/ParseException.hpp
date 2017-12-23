/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <string>

#include "exception/MWParseException.hpp"

namespace mwparse::parser {

class ParseException: public exception::MWParseException {

 public:
        ParseException(const std::string& function,
                       const std::string& description);


 private:


}; 



}   // namespace mwparse::parser

