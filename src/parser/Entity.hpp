/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include "EntityType.hpp"

namespace mwparse::parser {


class Entity {


 public:

                        Entity(EntityType type_);
    EntityType          GetType() const;


 private:
    EntityType          type;

};





}    // mwparse::parser

