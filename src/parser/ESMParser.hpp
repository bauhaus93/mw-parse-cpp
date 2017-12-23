/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "ParseException.hpp"

namespace mwparse::parser {

class ESMParser {

 public:  

                        ESMParser(const std::string& filename);

 private:
    std::ifstream       file;


};


}   // mwparse::parser
