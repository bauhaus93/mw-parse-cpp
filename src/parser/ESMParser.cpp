/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ESMParser.hpp"

namespace mwparse::parser {

ESMParser::ESMParser(const std::string& filename) :
    file { filename, std::ios::in | std::ios::binary } {
    
    INFO("Creating new esm parser for file ", filename);

    if (!file.is_open()) {
        throw ParseException("ESMParser::ESMParser", "Could not open file: " + filename);
    }

    file.exceptions(std::ios_base::failbit | std::ios_base::badbit);

}



void ESMParser::Parse() {

    while (true) {
        try {
            Record record { file };
        }
        catch (const ParseException& e) {
            ERROR(e.what());
            break;
        }
    }


}




}   // mwparse::parser



