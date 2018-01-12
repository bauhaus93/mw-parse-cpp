/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

#include "utility/Point2D.hpp"
#include "utility/Color.hpp"

#include "Cell.hpp"

namespace mwparse::entity {

class CellInterior: public Cell {
 public:
                    CellInterior();

    float           GetWaterHeight() const;
    const Color&    GetAmbientColor() const;
    const Color&    GetSunlightColor() const;
    const Color&    GetFogColor() const;
    float           GetFogDensity() const;


    void            SetWaterHeight(float _waterHeight);
    void            SetAmbientColor(Color _ambient);
    void            SetSunlightColor(Color _sunlight);
    void            SetFogColor(Color _fog);
    void            SetFogDensity(float _fogDensity);

 private:
     float      waterHeight;
     Color      ambient;
     Color      sunlight;
     Color      fog;
     float      fogDensity;

};

std::ostream& operator<<(std::ostream& os, const CellInterior& cell);


}   // namespace mwparse::entity
