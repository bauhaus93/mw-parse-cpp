/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <cstdint>

namespace mwparse {

class Color {
 public:
                Color(uint8_t _r, uint8_t _g, uint8_t _b);
    explicit    Color(uint32_t color);

    uint8_t     GetRed() const;
    uint8_t     GetGreen() const;
    uint8_t     GetBlue() const;

 private:
     uint8_t    r;
     uint8_t    g;
     uint8_t    b;
};

std::ostream& operator<<(std::ostream& os, const Color& col);

}   // namespace mwparse
