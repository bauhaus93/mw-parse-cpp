/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "TES3Header.hpp"

namespace mwparse::entity {

TES3Header::TES3Header():
    version { 0.0 },
    filetype { 0 },
    companyName { "<Not given>" },
    fileDescription { "<Not given>" } {

}

EntityType TES3Header::GetType() const {
    return EntityType::TES3;
}

}     // mwparse::entity
