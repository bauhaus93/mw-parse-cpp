/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include "EntityType.hpp"

namespace mwparse::entity {


class Entity {

 public:

                        Entity();
    virtual             ~Entity() = default;
    virtual EntityType  GetType() const;

};





}    // mwparse::entity

