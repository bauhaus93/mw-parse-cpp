/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <exception>
#include <string>

#include "exception/MWParseException.hpp"

namespace MWParse::Log {

class LoggerException : public Exception::MWParseException {
 public:
    LoggerException(const std::string& function,
                    const std::string& description);
};

}  // namespace MWParse::Log
