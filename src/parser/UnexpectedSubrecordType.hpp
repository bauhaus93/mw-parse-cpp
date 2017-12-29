/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <string>
#include <sstream>
#include <exception>

#include "ParseException.hpp"
#include "SubrecordType.hpp"

namespace mwparse::parser {

class UnexpectedSubrecordType: public ParseException {

 public:
        UnexpectedSubrecordType(const std::string& function,
                                SubrecordType found,
                                SubrecordType expected);
 
 private:


}; 



}   // namespace mwparse::parser

