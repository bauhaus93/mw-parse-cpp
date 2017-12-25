/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "ParseException.hpp"
#include "Record.hpp"
#include "logger/GlobalLogger.hpp"

namespace mwparse::parser {

class ESMParser {

 public:  

                        ESMParser(const std::string& filename);
    void                Parse();

 private:
    std::ifstream       file;


};


}   // mwparse::parser
