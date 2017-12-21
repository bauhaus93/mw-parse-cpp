/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "LoggerException.hpp"

namespace MWParse::Log {

LoggerException::LoggerException(
    const std::string& function,
    const std::string& description):
    MWParseException { "LoggerException",
                        function,
                        description,
                        nullptr } {
}

}   // namespace MWParse::Log
