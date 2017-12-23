/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ParseException.hpp"


namespace mwparse::parser {


ParseException::ParseException(const std::string& function,
                               const std::string& description):
    MWParseException { "ParseException",
                       function,
                       description,
                       nullptr } {
}



}   // namespacemwparse::parser
