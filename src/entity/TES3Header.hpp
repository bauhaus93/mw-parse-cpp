/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

#include "parser/Subrecord.hpp"
#include "parser/SubrecordType.hpp"
#include "parser/exception/UnexpectedRecordSize.hpp"
#include "parser/Read.hpp"

namespace mwparse::entity {

class TES3Header {
 public:
                TES3Header(std::istream& is, int32_t size);

    uint32_t    GetNumRecords() const;

    friend std::ostream& operator<<(std::ostream& os, const TES3Header& tes3);

 private:
    float       version;
    uint32_t    filetype;
    std::string companyName;
    std::string fileDescription;
    uint32_t    numRecords;
};

}    // namespace mwparse::entity
