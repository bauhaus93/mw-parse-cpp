/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Entity.hpp"

namespace mwparse::parser {


Entity::Entity(EntityType type_):
    type { type_ } {
}

EntityType Entity::GetType() const {
    return type;
}





}   // mwparse::parser


