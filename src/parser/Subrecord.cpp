/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Subrecord.hpp"


namespace mwparse::parser {

entity::Entity ReadSubrecord(std::istream& is) {
    std::string name;
    int32_t size = 0;

    if (is.eof()) {
        throw ParseException("ReadSubrecord", "EOF reached");
    }

    try {
        name = ReadString(is, 4);
        size = Read<int32_t>(is);
    }
    catch (const std::ios_base::failure& e) {
        throw ParseException("ReadSubrecord", "IO Error", e);
    }

    INFO("subrecord =", name, ", size = ", size);

    is.seekg(size, std::ios_base::cur);

    return entity::Entity();

}

}   // mwparse::parser


