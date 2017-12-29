/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <cstdint>
#include <memory>

#include "entity/TES3Header.hpp"

namespace mwparse::parser {

std::unique_ptr<entity::TES3Header> ReadTES3(std::istream& is, size_t size);

}   //mwparse::parser
