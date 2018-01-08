/* Copyright 2018 Jakob Fischer <JakobFischer93@gmail.com> */

#pragma once

namespace mwparse {

template<typename T>
class Point3D {
 public:
            Point3D(T _x, T _y, T _z);

    T       GetX() const;
    T       GetY() const;
    T       GetZ() const;
    void    SetX(T _x);
    void    SetY(T _y);
    void    SetZ(T _z);

 private:
     T  x;
     T  y;
     T  z;
};

template<typename T>
Point3D<T>::Point3D(T _x, T _y, T _z):
    x { _x },
    y { _y },
    z { _z } {
}

template<typename T>
inline T Point3D<T>::GetX() const {
    return x;
}

template<typename T>
inline T Point3D<T>::GetY() const {
    return y;
}

template<typename T>
inline T Point3D<T>::GetZ() const {
    return z;
}

template<typename T>
inline void Point3D<T>::SetX(T _x) {
    x = _x;
}

template<typename T>
inline void Point3D<T>::SetY(T _y) {
    y = _y;
}

template<typename T>
inline void Point3D<T>::SetZ(T _z) {
    z = _z;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Point3D<T>& point) {
    os << "(" << point.GetX() << "/"
       << point.GetY() << "/"
       << point.GetZ() << ")";
    return os;
}

}   // namespace mwparse
