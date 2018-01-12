/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

#include "utility/Point2D.hpp"

namespace mwparse::entity {

class Cell {
 public:
                            Cell();
    virtual                 ~Cell() = default;

    const std::string&      GetName() const;
    uint32_t                GetFlags() const;
    const Point2D<int32_t>& GetGridPos() const;
    const std::string&      GetRegionName() const;

    void                    SetName(const std::string& _name);
    void                    SetFlags(uint32_t _flags);
    void                    SetGridPos(Point2D<int32_t> _gridPos);
    void                    SetRegionName(const std::string& _regionName);

 private:
    std::string         name;
    uint32_t            flags;
    Point2D<int32_t>    gridPos;
    std::string         regionName;

};

std::ostream& operator<<(std::ostream& os, const Cell& cell);

}   // namespace mwparse::entity
