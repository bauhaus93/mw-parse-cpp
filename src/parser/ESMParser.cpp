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
        throw ParseException(__FUNCTION__, "Could not open file: " +
                             filename,
                             e);
    }
}

void ESMParser::Parse() {
    RecordHeader rh { file };
    if (rh.type != RecordType::TES3) {
        throw UnexpectedRecordType(__FUNCTION__, rh.type, RecordType::TES3);
    }

    auto tes3 = ReadTES3Header(file, rh.size);
    INFO(*tes3);

    for (uint32_t i = 0; i < tes3->GetNumRecords(); i++) {
        if (i % 1000 == 0)
            DEBUG("Record count: ", i);
        try {
            RecordHeader rh { file };
            // if (rh.type == entity::EntityType::UNKNOWN)
                file.seekg(rh.size, std::ios_base::cur);
        }
        catch (const ParseException& e) {
            ERROR(e.what());
            break;
        }
    }
}




}   // namespace mwparse::parser
