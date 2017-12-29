/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>

namespace mwparse::parser {

//assuming little endian byte order (as used in .esm files)
template<typename T>
T Read(std::istream& is) {
    T value;
    is.read(reinterpret_cast<char*>(&value), sizeof(T));
    return value;
}

std::string ReadString(std::istream& is, size_t len);

}   // mwparser::parser

