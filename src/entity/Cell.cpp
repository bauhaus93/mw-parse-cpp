/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Cell.hpp"

namespace mwparse::entity {

Cell::Cell(std::istream& is, int32_t size):
    name { "<unknown>" },
    flags { 0 },
    gridPos { 0, 0 },
    regionName { "<unknown>" } {

    {
        parser::SubrecordHeader sh { is, parser::SubrecordType::NAME };
        name = parser::ReadString(is, sh.size);
    }
    {
        parser::SubrecordHeader sh { is, parser::SubrecordType::DATA, 12 };
        flags = parser::Read<uint32_t>(is);
        gridPos = Point2D<int32_t>(is);
    }
    {
        parser::SubrecordHeader sh { is, parser::SubrecordType::RGNN };
        regionName = parser::ReadString(is, sh.size);
    }
    {
        parser::SubrecordHeader sh { is, parser::SubrecordType::NAM0, 4 };
        parser::Read<int32_t>(is);
    }

}

}   // namespace mwparse::entity
