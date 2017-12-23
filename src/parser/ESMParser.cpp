/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ESMParser.hpp"
#include "logger/GlobalLogger.hpp"

namespace mwparse::parser {

ESMParser::ESMParser(const std::string& filename) :
    file { filename, std::ios::in | std::ios::binary } {
    
    INFO("Creating new esm parser for file ", filename);

    if (!file.is_open()) {
        throw ParseException("ESMParser::ESMParser", "Could not open file: " + filename);
    }

}



}   // mwparse::parser



