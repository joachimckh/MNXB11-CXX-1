#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  x = 2.71; // possible because its a public variable
  return 3.14;
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}

// 2.2
fVector2D operator+(const fVector2D &vec1, const fVector2D &vec2) {
  return fVector2D(vec1.x_ + vec2.x_ , vec1.y_ + vec2.y_); // adds coordinates respectively
}

bool fVector2D::operator==(const fVector2D &vec2) const {
  return (x_ == vec2.x_) && (y_ == vec2.y_); // compares coordinates respectively, && means only true if BOTH true. 
}

} // namespace homework
