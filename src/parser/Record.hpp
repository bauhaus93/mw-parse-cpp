/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <cstdint>
#include <memory>

#include "entity/Entity.hpp"
#include "entity/EntityType.hpp"
#include "ParseException.hpp"
#include "logger/GlobalLogger.hpp"

#include "Read.hpp"
#include "ReadTES3.hpp"

namespace mwparse::parser {

std::unique_ptr<entity::Entity> ReadRecord(std::istream& is);

}   // mwparse::parser

