/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "TES3Header.hpp"

namespace mwparse::entity {

TES3Header::TES3Header():
    version { 0.0 },
    filetype { 0 },
    companyName { "<Not given>" },
    fileDescription { "<Not given>" },
    numRecords { 0 } {
}

void TES3Header::SetVersion(float _version) {
    version = _version;
}

void TES3Header::SetFileType(uint32_t _filetype) {
    filetype = _filetype;
}

void TES3Header::SetCompanyName(std::string _companyName) {
    companyName = _companyName;
}

void TES3Header::SetFileDescription(std::string _fileDescription) {
    fileDescription = _fileDescription;
}

void TES3Header::SetNumRecords(uint32_t _numRecords) {
    numRecords = _numRecords;
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

}     // namespace mwparse::entity
