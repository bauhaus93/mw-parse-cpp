/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <memory>

#include "entity/Cell.hpp"
#include "entity/CellInterior.hpp"

#include "exception/UnexpectedRecordSize.hpp"
#include "Subrecord.hpp"
#include "SubrecordType.hpp"
#include "Read.hpp"


namespace mwparse::parser {

std::unique_ptr<entity::Cell> ReadCell(std::istream& is, uint32_t size);

}   // namespace mwparse::parser
