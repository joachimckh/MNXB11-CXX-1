#include "as2.hpp"
#include <iostream>

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz(){
  return 3.14;
  x = 2.71f;
}

std::vector<double> Foo::quux(){
  return {1.0, 2.0, 3.0};
}

fVector2D operator+(const fVector2D& a, const fVector2D& b){
  return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}

bool fVector2D::operator==(const fVector2D& c) const {
return x_ == c.x_ && y_ == c.y_;
}
} // namespace homework
