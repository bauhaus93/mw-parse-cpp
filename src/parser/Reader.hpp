/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace mwparse::parser {

class Reader {
 public:
    explicit    Reader(std::istream& is);


    void        SavePosition();
    void        RestorePosition();
    void        ClearPositions();
    void        Forward(std::streampos offset);
    void        Backward(std::streampos offset);

 private:
     std::istream&                  stream;
     std::vector<std::streampos>    positionStack;

};

}   // namespace mwparse::parser
