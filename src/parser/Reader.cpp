/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#include "Reader.hpp"

namespace mwparse::parser {

Reader::Reader(std::istream& _stream):
    stream { _stream } {
}

void Reader::SavePosition() {
    positionStack.push_back(stream.tellg());
}

void Reader::RestorePosition() {
    stream.seekg(positionStack.back(), stream.beg);
    positionStack.pop_back();
}

void Reader::ClearPositions() {
    positionStack.clear();
}

void Reader::Forward(std::streampos offset) {
    stream.seekg(offset, stream.cur);
}

void Reader::Backward(std::streampos offset) {
    stream.seekg(-offset, stream.cur);
}

}   // namespace mwparse::parser
