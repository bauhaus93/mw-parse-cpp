/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#include "CellInterior.hpp"

namespace mwparse::entity {

CellInterior::CellInterior():
    Cell(),
    waterHeight { 0.0 },
    ambient { 0, 0, 0 },
    sunlight { 0, 0, 0 },
    fog { 0, 0, 0 },
    fogDensity { 0 } {

}

float CellInterior::GetWaterHeight() const {
    return waterHeight;
}

const Color& CellInterior::GetAmbientColor() const {
    return ambient;
}

const Color& CellInterior::GetSunlightColor() const {
    return sunlight;
}

const Color& CellInterior::GetFogColor() const {
    return fog;
}

float CellInterior::GetFogDensity() const {
    return fogDensity;
}

void CellInterior::SetWaterHeight(float _waterHeight) {
    waterHeight = _waterHeight;
}

void CellInterior::SetAmbientColor(Color _ambient) {
    ambient = _ambient;
}

void CellInterior::SetSunlightColor(Color _sunlight) {
    sunlight = _sunlight;
}

void CellInterior::SetFogColor(Color _fog) {
    fog = _fog;
}

void CellInterior::SetFogDensity(float _fogDensity) {
    fogDensity = _fogDensity;
}

std::ostream& operator<<(std::ostream& os, const CellInterior& cell) {
    operator<<(os, static_cast<const Cell&>(cell));
    os << ", Interior"
       << "water height = " << cell.GetWaterHeight()
       << ", ambient color = " << cell.GetAmbientColor()
       << ", sunlight color = " << cell.GetSunlightColor()
       << ", fog color = " << cell.GetFogColor()
       << ", fog density = " << cell.GetFogDensity();
    return os;
}

}   // namespace mwparse::entity
