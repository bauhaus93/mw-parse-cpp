/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

#include <iostream>

#include "parser/Read.hpp"

namespace mwparse {

template<typename T>
class Point2D {
 public:
                Point2D(T _x, T _y);
    explicit    Point2D(std::istream& is);

    T       GetX() const;
    T       GetY() const;
    void    SetX(T _x);
    void    SetY(T _y);

 private:
     T   x;
     T   y;
};

template<typename T>
Point2D<T>::Point2D(T _x, T _y):
    x { _x },
    y { _y } {
}

template<typename T>
Point2D<T>::Point2D(std::istream& is):
    x { parser::Read<T>(is) },
    y { parser::Read<T>(is) } {
}


template<typename T>
inline T Point2D<T>::GetX() const {
    return x;
}
template<typename T>
inline T Point2D<T>::GetY() const {
    return y;
}

template<typename T>
inline void Point2D<T>::SetX(T _x) {
    x = _x;
}

template<typename T>
inline void Point2D<T>::SetY(T _y) {
    y = _y;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Point2D<T>& point) {
    os << "(" << point.GetX() << "/" << point.GetY() << ")";
    return os;
}

}   // namespace mwparse
