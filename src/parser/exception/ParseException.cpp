/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ParseException.hpp"


namespace mwparse::parser {


ParseException::ParseException(const std::string& function,
                               const std::string& description):
    MWParseException { "ParseException",
                       function,
                       description } {
}

ParseException::ParseException(const std::string& function,
                               const std::string& description,
                               const std::exception& cause):
    MWParseException { "ParseException",
                       function,
                       description,
                       cause } {
}



}   // namespace mwparse::parser
