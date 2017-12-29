/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ReadTES3.hpp"

namespace mwparse::parser {

std::unique_ptr<entity::TES3Header> ReadTES3(std::istream& is, size_t size) {
    auto tes3 = std::make_unique<entity::TES3Header>();


    return tes3;
}

}   //mwparse::parser



