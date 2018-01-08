/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <exception>
#include <string>

#include "MWParseException.hpp"

namespace mwparse::log {

class LoggerException : public exception::MWParseException {
 public:
    LoggerException(const std::string& function,
                    const std::string& description);
};

}  // namespace mwparse::log
