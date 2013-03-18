#pragma once

namespace graphics {
template <typename T>
class Rect {
public:
    T x;
    T y;
    T w;
    T h;
public:
    Rect(T x, T y, T w, T h) : x(x), y(y), w(w), h(h) {}
};

typedef Rect<int> IntRect;
typedef Rect<float> FloatRect;

}
