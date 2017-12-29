/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "TES3Header.hpp"

namespace mwparse::entity {

TES3Header::TES3Header(std::istream& is, int32_t size):
    version { 0.0 },
    filetype { 0 },
    companyName { "<Not given>" },
    fileDescription { "<Not given>" },
    numRecords { 0 } {

    if (size < 308)
        throw parser::UnexpectedRecordSize(__FUNCTION__, size, 308);

    parser::SubrecordHeader sh { is, parser::SubrecordType::HEDR, 300 };
    
    version = parser::Read<float>(is);
    filetype = parser::Read<uint32_t>(is);
    companyName = parser::ReadString(is, 32);
    fileDescription = parser::ReadString(is, 256);
    numRecords = parser::Read<uint32_t>(is);
}

uint32_t TES3Header::GetNumRecords() const {
    return numRecords;
}

std::ostream& operator<<(std::ostream& os, const TES3Header& tes3) {
    os << "TES3 Header:"
       << " version = " << tes3.version
       << ", filetype = " << tes3.filetype
       << ", company name = \"" << tes3.companyName
       << "\", file description = \"" << tes3.fileDescription
       << "\", num records = " << tes3.numRecords;
    return os;
}

}     // mwparse::entity
