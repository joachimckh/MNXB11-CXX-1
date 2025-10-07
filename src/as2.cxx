#include "as2.hpp"
#include <vector>

namespace homework {

// 2.1 - Foo struct implementations
int Foo::bar() { return 42; }

float Foo::baz() { x = 2.71f; return 3.14f; }

std::vector<double> Foo::quux() { return {1.0, 2.0, 3.0}; }

// 2.2 - fVector2D operator overloads
fVector2D operator+(const fVector2D &a, const fVector2D &b) {
    return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}

bool fVector2D::operator==(const fVector2D &other) const {
    return (x_ == other.x_) && (y_ == other.y_);
}

} // namespace homework

