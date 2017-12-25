/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Record.hpp"

namespace mwparse::parser {


Record::Record(std::istream& is):
    entity { EntityType::UNHANDLED } {
    
    if (is.eof()) {
        throw ParseException("Record::Record", "EOF reached");
    }

    try {
        is.read(name, 4);
        is >> size;
        is >> unknown;
        is >> flags;
    }
    catch (const std::ios_base::failure& e) {
        throw ParseException("Record::Record", "IO Error", e);
    }

    name[4] = 0;


    INFO("Record: ", name);
    is.seekg(size, std::ios_base::cur);
}


EntityType Record::GetEntityType() const {
    return entity.GetType();
}

Entity Record::GetEntity() const {
    return entity;
}


}   // mwparse::parser

