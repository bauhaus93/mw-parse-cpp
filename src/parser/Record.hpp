/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once
#include <iostream>

#include "Entity.hpp"
#include "EntityType.hpp"
#include "ParseException.hpp"
#include "logger/GlobalLogger.hpp"

namespace mwparse::parser {

class Record {

 public:

                        Record(std::istream& is);
    EntityType          GetEntityType() const;
    Entity              GetEntity() const;

 private:

    char                name[5];
    long                size;
    long                unknown;
    long                flags;
    Entity              entity;
};


}   // mwparse::parser

