/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Read.hpp"

namespace mwparse::parser {

std::string ReadString(std::istream& is, uint32_t size) {
    std::string s(size, 0);
    is.read(&s[0], size);
    return s;
}

}   // namespace mwparse::parser
