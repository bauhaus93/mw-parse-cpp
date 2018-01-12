/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Color.hpp"

namespace mwparse {

Color::Color(uint8_t _r, uint8_t _g, uint8_t _b):
    r { _r },
    g { _g },
    b { _b } {
}

Color::Color(uint32_t color):
    r { static_cast<uint8_t>(color & 0xFF) },
    g { static_cast<uint8_t>((color >> 8) & 0xFF) },
    b { static_cast<uint8_t>((color >> 16) & 0xFF) } {
}

uint8_t Color::GetRed() const {
    return r;
}

uint8_t Color::GetGreen() const {
    return g;
}

uint8_t Color::GetBlue() const {
    return b;
}

std::ostream& operator<<(std::ostream& os, const Color& col) {
    os << std::hex
       << col.GetRed() << "/"
       << col.GetGreen() << "/"
       << col.GetBlue();
    return os;
}

}   // namespace mwparse
