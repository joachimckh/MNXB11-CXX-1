#include "as2.hpp"

namespace homework {

int Foo::bar() {
    return 42;
}

float Foo::baz() {
    x = 2.71;
    return 3.14;
}

std::vector<double> Foo::quux() {
    return {1.0, 2.0, 3.0};
}

} // namespace homework

namespace homework {

// + operator (friend-style, but defined outside the class)
fVector2D operator+(const fVector2D& a, const fVector2D& b) {
    return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}

// == operator (member-style)
bool fVector2D::operator==(const fVector2D& other) const {
    return (x_ == other.x_) && (y_ == other.y_);
}

} // namespace homework

