/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <memory>

#include "entity/TES3Header.hpp"

#include "exception/UnexpectedRecordSize.hpp"
#include "Subrecord.hpp"
#include "SubrecordType.hpp"
#include "Read.hpp"


namespace mwparse::parser {

std::unique_ptr<entity::TES3Header> ReadTES3Header(std::istream& is, uint32_t size);

}   // namespace mwparse::parser
