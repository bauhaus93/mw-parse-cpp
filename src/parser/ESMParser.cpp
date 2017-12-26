/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ESMParser.hpp"

namespace mwparse::parser {

ESMParser::ESMParser(const std::string& filename) :
    file { } {
    
    INFO("Creating new esm parser for file ", filename);

    file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        file.open(filename, std::ifstream::binary);
    }
    catch (const std::ios_base::failure& e) {    
        throw ParseException("ESMParser::ESMParser", "Could not open file: " + filename, e);
    }


}

void ESMParser::Parse() {
    while (true) {
        try {
            ReadRecord(file);
        }
        catch (const ParseException& e) {
            ERROR(e.what());
            break;
        }
    }
}




}   // mwparse::parser



