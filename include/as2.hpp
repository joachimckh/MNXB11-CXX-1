#pragma once
#include <vector>

namespace homework {
// Hint: Lecture 5 slides

// As 2.1 struct with a method that returns an int
// TO DO: in src/as1.cxx, implement the method bar() of the struct Foo to return 42.
// TO DO: in src/as1.cxx, implement the method baz() of the struct Foo to return 3.14 and set the member variable x to 2.71
// TO DO: in src/as1.cxx, implement the method quux() of the struct Foo to return a vector of doubles {1.0, 2.0, 3.0}
struct Foo { //like class but all variables are public by default
  int bar(); // just implemented, not defined yet
  float baz();
  std::vector<double> quux(); //vector is a class in standard library

  float x;
};

// As 2.2 (Operator overloading) custom vector class, that will overload operators
// TO DO: implement the overloaded + operator and == operator
// + operator should return a fVector2D that is the element-wise sum of two vectors
// == operator should return true if two vectors are equal (element-wise)
// HINT: you can use friend functions for operator overloading (+)
// and member functions for operator overloading (==)


class fVector2D { // my own vector class (without using the one from std)
public: 
  fVector2D(float x, float y) : x_(x), y_(y) {} // constructor 

bool operator==(const fVector2D &other) const; // function declaration

friend fVector2D operator+(const fVector2D &vec1, const fVector2D &vec2); //friend allows this function to use private data

private:
  float x_;
  float y_;
};


} // namespace homework
