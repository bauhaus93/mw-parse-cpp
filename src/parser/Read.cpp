/* Copyright 2017 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Read.hpp"

namespace mwparse::parser {

std::string ReadString(std::istream& is, size_t len) {
    std::string s (len + 1, 0);
    is.read(&s[0], len);
    return s;
}

}   // mwparse::parser
