/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>


namespace mwparse::entity {

class TES3Header {
 public:
                TES3Header();

    void        SetVersion(float _version);
    void        SetFileType(uint32_t _filetype);
    void        SetCompanyName(std::string _companyName);
    void        SetFileDescription(std::string _fileDescription);
    void        SetNumRecords(uint32_t _numRecords);

    uint32_t    GetNumRecords() const;

    friend std::ostream&    operator<<(std::ostream& os,
                                       const TES3Header& tes3);
 private:
    float       version;
    uint32_t    filetype;
    std::string companyName;
    std::string fileDescription;
    uint32_t    numRecords;
};

}    // namespace mwparse::entity
