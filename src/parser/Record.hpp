/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once
#include <iostream>
#include <cstdint>

#include "Entity.hpp"
#include "EntityType.hpp"
#include "ParseException.hpp"
#include "logger/GlobalLogger.hpp"

namespace mwparse::parser {

Entity ReadRecord(std::istream& is);

}   // mwparse::parser

