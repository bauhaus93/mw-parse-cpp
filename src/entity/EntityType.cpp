/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "EntityType.hpp"

namespace mwparse::entity {

EntityType FromString(const std::string& str) {

    if (str == "TES3")
        return EntityType::TES3;
    else if ( str == "CELL")
        return EntityType::CELL;
    else
        return EntityType::UNHANDLED;
}


std::ostream& operator<<(std::ostream& os, const EntityType& t) {
    switch(t) {
        case EntityType::TES3:  os << "TES3";
        case EntityType::CELL:  os << "CELL";
        default:                os << "UNHANDLED";
    }
    return os;
}

}   // mwparse::entity
