/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ReadTES3Header.hpp"

namespace mwparse::parser {

std::unique_ptr<entity::TES3Header> ReadTES3Header(std::istream& is, uint32_t size) {
    if (size < 308)
        throw parser::UnexpectedRecordSize(__FUNCTION__, size, 308);

    auto header = std::make_unique<entity::TES3Header>();

    parser::SubrecordHeader sh { is, parser::SubrecordType::HEDR, 300 };

    header->SetVersion(parser::Read<float>(is));
    header->SetFileType(parser::Read<uint32_t>(is));
    header->SetCompanyName(parser::ReadString(is, 32));
    header->SetFileDescription(parser::ReadString(is, 256));
    header->SetNumRecords(parser::Read<uint32_t>(is));

    return header;
}

}   // namespace mwparse::parser
