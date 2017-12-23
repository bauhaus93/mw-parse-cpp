/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "MWParseException.hpp"

namespace mwparse::exception {

MWParseException::MWParseException(
        const std::string& error,
        const std::string& function,
        const std::string& description,
        std::unique_ptr<std::exception> cause_):
        cause { std::move(cause_) } {
    std::stringstream s;
    s << error << " @ " << function << ": " << description;
    if (cause != nullptr) {
        s << ", cause: " << cause->what();
    }
    msg = s.str();
}

MWParseException::MWParseException(
    const std::string& function,
    const std::string& description):
    MWParseException { "MWParseException", function, description, nullptr } {
}

MWParseException::MWParseException(
    const std::string& function,
    const std::string& description,
    const std::exception& cause_):
    MWParseException { "MWParseException",
        function,
        description,
        std::make_unique<std::exception>(cause_)} {
}

}   // namespace mwparse::exception 
