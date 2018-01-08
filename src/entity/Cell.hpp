/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

#include "utility/Point2D.hpp"

#include "parser/Subrecord.hpp"
#include "parser/SubrecordType.hpp"
#include "parser/exception/UnexpectedRecordSize.hpp"
#include "parser/Read.hpp"

namespace mwparse::entity {

class Cell {
 public:
                            Cell(std::istream& is, int32_t size);


    friend std::ostream&    operator<<(std::ostream& os, const Cell& cell);

 private:
    std::string         name;
    uint32_t            flags;
    Point2D<int32_t>    gridPos;
    std::string         regionName;

};


}   // namespace mwparse::entity
