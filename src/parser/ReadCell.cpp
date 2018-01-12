/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#include "ReadCell.hpp"

namespace mwparse::parser {

std::unique_ptr<entity::Cell> ReadCell(std::istream& is, uint32_t size) {
    std::string name;
    std::string regionName;
    uint32_t flags = 0;
    Point2D<int32_t> gridPos { 0, 0 };

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

    if (flags & 1) {    //interior cell
        auto cell = std::make_unique<entity::CellInterior>();

        cell->SetName(name);
        cell->SetRegionName(regionName);
        cell->SetFlags(flags);
        cell->SetGridPos(gridPos);

        parser::SubrecordHeader sh { is, parser::SubrecordType::WHGT };
        cell->SetWaterHeight(parser::Read<float>(is));
        Color ambient = Color(parser::Read<uint32_t>(is));
        Color sunlight = Color(parser::Read<uint32_t>(is));
        Color fog = Color(parser::Read<uint32_t>(is));
        cell->SetAmbientColor(ambient);
        cell->SetSunlightColor(sunlight);
        cell->SetFogColor(fog);
        cell->SetFogDensity(parser::Read<float>(is));

        return cell;
    } else {            //exterior cell
        return nullptr;
    }
}

}   // namespace mwparse::parser
