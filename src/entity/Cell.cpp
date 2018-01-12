/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Cell.hpp"

namespace mwparse::entity {

Cell::Cell():
    name { "<unknown>" },
    flags { 0 },
    gridPos { 0, 0 },
    regionName { "<unknown>" } {
}

const std::string& Cell::GetName() const {
    return name;
}

uint32_t Cell::GetFlags() const {
    return flags;
}

const Point2D<int32_t>& Cell::GetGridPos() const {
    return gridPos;
}

const std::string& Cell::GetRegionName() const {
    return regionName;
}

void Cell::SetName(const std::string& _name) {
    name = _name;
}
void Cell::SetFlags(uint32_t _flags) {
    flags = _flags;
}
void Cell::SetGridPos(Point2D<int32_t> _gridPos) {
    gridPos = _gridPos;
}
void Cell::SetRegionName(const std::string& _regionName) {
    regionName = _regionName;
}

std::ostream& operator<<(std::ostream& os, const Cell& cell) {
    os << "Cell: "
       << "name = " << cell.GetName()
       << ", region name = " << cell.GetRegionName()
       << ", flags = " << cell.GetFlags()
       << ", grid pos = " << cell.GetGridPos();
    return os;
}

}   // namespace mwparse::entity
