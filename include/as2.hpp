#pragma once
#include <vector>

namespace homework {

// 2.1 - Foo struct
struct Foo {
    int bar();
    float baz();
    std::vector<double> quux();
    float x;
};

// 2.2 - fVector2D class
class fVector2D {
public:
    fVector2D() = default;
    fVector2D(float x, float y) : x_(x), y_(y) {}

    bool operator==(const fVector2D &other) const;

    float x_ = 0.0f;
    float y_ = 0.0f;
};

// + operator as friend
fVector2D operator+(const fVector2D &a, const fVector2D &b);

} // namespace homework
