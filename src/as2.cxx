#include "as2.hpp"
#include <vector>

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  x = 2.71f;
  return 3.14f;
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}

fVector2D operator+(const fVector2D& V1, const fVector2D& V2) {
    return fVector2D(V1.x_ + V2.x_, V1.y_ + V2.y_);
}

bool fVector2D::operator==(const fVector2D& other) const {
  return x_ == other.x_ && y_ == other.y_;
}


} // namespace homework
