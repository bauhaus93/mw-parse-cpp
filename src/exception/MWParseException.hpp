/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <exception>
#include <sstream>
#include <memory>
#include <string>

namespace MWParse::Exception {

class MWParseException : public std::exception {
    std::string msg;
    std::unique_ptr<std::exception> cause;

 protected:
                        MWParseException(
                            const std::string& error,
                            const std::string& function,
                            const std::string& description,
                            std::unique_ptr<std::exception> cause_);

 public:
                MWParseException(
                            const std::string& function,
                            const std::string& description);
                MWParseException(
                            const std::string& function,
                            const std::string& description,
                            const std::exception& cause_);

    const char* what() const throw(){ return msg.c_str(); }
};

}   // namespace MWParse::Exception
