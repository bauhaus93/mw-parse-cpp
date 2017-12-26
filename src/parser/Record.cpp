/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Record.hpp"

namespace mwparse::parser {

std::string ReadString(std::istream& is, size_t len);
int32_t ReadInt32(std::istream& is);

Entity ReadRecord(std::istream& is) {
    std::string name;
    long size = 0;
    long unknown = 0;
    long flags = 0;

    if (is.eof()) {
        throw ParseException("Record::Record", "EOF reached");
    }

    try {
        name = ReadString(is, 4);
        size = ReadInt32(is);
        unknown = ReadInt32(is);
        flags = ReadInt32(is); 

    }
    catch (const std::ios_base::failure& e) {
        throw ParseException("Record::Record", "IO Error", e);
    }

    INFO("record = ", name, ", size = ", size);
    is.seekg(size, std::ios_base::cur);
    
    return Entity { EntityType::UNHANDLED };
}


std::string ReadString(std::istream& is, size_t len) {
    std::string s (len + 1, 0);
    is.read(&s[0], len);
    return s;
}

int32_t ReadInt32(std::istream& is) {
    int32_t value;
    is.read(reinterpret_cast<char*>(&value), sizeof(int32_t));
    return value;
}

}   // mwparse::parser

