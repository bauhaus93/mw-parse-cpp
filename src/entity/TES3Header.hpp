/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <string>

#include "Entity.hpp"
#include "EntityType.hpp"

namespace mwparse::entity {

class TES3Header: public Entity {

 public:
            TES3Header();

            EntityType  GetType() const override;            
            
            inline void SetVersion(float version_);
            inline void SetFiletype(uint32_t filetype_);
            inline void SetCompanyName(std::string name);
            inline void SetFileDescription(std::string descr);

 private:

    float       version;
    uint32_t    filetype;
    std::string companyName;
    std::string fileDescription;

};

void TES3Header::SetVersion(float version_) {
    version = version_;
}

void TES3Header::SetFiletype(uint32_t filetype_) {
    filetype = filetype_;
}

void TES3Header::SetCompanyName(std::string name) {
    companyName = name;
}

void TES3Header::SetFileDescription(std::string descr) {
    fileDescription = descr;
}

}    // mwparse::entity


