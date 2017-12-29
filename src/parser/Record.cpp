/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Record.hpp"

namespace mwparse::parser {

std::unique_ptr<entity::Entity> ReadRecord(std::istream& is) {
    std::string name;
    int32_t size = 0;
    int32_t unknown = 0;
    int32_t flags = 0;

    if (is.eof()) {
        throw ParseException("ReadRecord", "EOF reached");
    }

    try {
        name = ReadString(is, 4);
        size = Read<int32_t>(is);
        unknown = Read<int32_t>(is);
        flags = Read<int32_t>(is); 

    }
    catch (const std::ios_base::failure& e) {
        throw ParseException("ReadRecord", "IO Error", e);
    }

    INFO("record = ", name, ", size = ", size);
    
    switch(entity::FromString(name)) {
        case entity::EntityType::TES3:  return ReadTES3(is, size);
        default:
            is.seekg(size, std::ios_base::cur);
            return std::make_unique<entity::Entity>();
    }
}


}   // mwparse::parser

