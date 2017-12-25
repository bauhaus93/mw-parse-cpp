/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <exception>
#include <iostream>
#include <sstream>
#include <memory>
#include <string>

namespace mwparse::exception {

class MWParseException : public std::exception {
 private:
    std::string msg;

    friend std::ostream&        operator<<(std::ostream& os, 
                                           const MWParseException& e);


 protected:
                MWParseException(
                            const std::string& error,
                            const std::string& function,
                            const std::string& description);

                MWParseException(
                            const std::string& error,
                            const std::string& function,
                            const std::string& description,
                            const std::exception& cause);

 public:
                MWParseException(
                            const std::string& function,
                            const std::string& description);
                MWParseException(
                            const std::string& function,
                            const std::string& description,
                            const std::exception& cause);


    const char* what() const throw(){ return msg.c_str(); }
};

}   // namespace mwparse::exception
