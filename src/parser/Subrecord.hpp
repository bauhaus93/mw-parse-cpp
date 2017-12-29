/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include<iostream>
#include <cstdint>

#include "entity/Entity.hpp"
#include "entity/EntityType.hpp"
#include "ParseException.hpp"
#include "logger/GlobalLogger.hpp"
#include "Read.hpp"


namespace mwparse::parser {
    
entity::Entity ReadSubrecord(std::istream& is);



}   // mwparse::parser
