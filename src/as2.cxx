#include "as2.hpp"
#include <vector>
#include <iostream>

namespace homework {

//Sets bar to return 42
int Foo::bar() { 
  return 42; 
}

//Sets baz to return 3.14 
float Foo::baz() { 
  this->x = 2.71;
  return 3.14f; 
}

//Sets quux to a vector 1, 2, 3
std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}


//Redefines + operator
fVector2D operator+(const fVector2D &a, const fVector2D &b) { 
  return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}

//Redefines == operator
bool fVector2D::operator==(const fVector2D &b) const {
  return (x_ == b.x_) && (y_ == b.y_);
}



} // namespace homework
