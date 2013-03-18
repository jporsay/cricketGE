#pragma once

namespace graphics {

template<typename T>
class Point {
public:
    T x;
    T y;
    Point(T x, T y) : x(x), y(y) {}
};

typedef Point<float> FloatPoint;
typedef Point<int> IntPoint;

}
