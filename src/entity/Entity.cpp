/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Entity.hpp"

namespace mwparse::entity {


Entity::Entity() {
}

EntityType Entity::GetType() const {
    return EntityType::UNHANDLED;
}

}   // mwparse::entity


