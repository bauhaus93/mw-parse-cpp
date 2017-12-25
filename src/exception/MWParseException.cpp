/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "MWParseException.hpp"

namespace mwparse::exception {

MWParseException::MWParseException(
        const std::string& error,
        const std::string& function,
        const std::string& description,
        const std::exception& cause) {
    std::stringstream s;
    s << error << " @ " << function << ": " << description;
    s << ", cause: " << cause.what();
    msg = s.str();
}

MWParseException::MWParseException(
        const std::string& error,
        const std::string& function,
        const std::string& description) {
    std::stringstream s;
    s << error << " @ " << function << ": " << description;
    msg = s.str();
}


MWParseException::MWParseException(
    const std::string& function,
    const std::string& description):
    MWParseException { "MWParseException", function, description } {
}

MWParseException::MWParseException(
    const std::string& function,
    const std::string& description,
    const std::exception& cause):
    MWParseException { "MWParseException",
        function,
        description,
        cause } {
}


std::ostream& operator<<(std::ostream os, const MWParseException& e) {
    return os << e.what();
}

}   // namespace mwparse::exception 
