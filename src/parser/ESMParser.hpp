/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "logger/GlobalLogger.hpp"
#include "entity/TES3Header.hpp"

#include "exception/ParseException.hpp"
#include "exception/UnexpectedRecordType.hpp"
#include "Record.hpp"
#include "RecordType.hpp"


namespace mwparse::parser {

class ESMParser {
 public:
    explicit            ESMParser(const std::string& filename);
    void                Parse();

 private:
    std::ifstream       file;
};


}   // namespace mwparse::parser
