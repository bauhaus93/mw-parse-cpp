/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

namespace mwparse::entity {

enum class EntityType {
    UNHANDLED,
    TES3,
    CELL
};

EntityType FromString(const std::string& str);
std::ostream& operator<<(std::ostream& os, const EntityType& t);

}   // mwparse::entity

