#include "as2.hpp"
#include <iostream>

namespace homework {

// implement Foo methods here
/* -------------- as 2.1 ----------- */
int Foo::bar() 
{ 
  return 42; 
}

float Foo::baz()
{
  Foo::x = 2.71;
  return 3.14;
}

std::vector<double> Foo::quux()
{
  std::vector<double> vec{1.0, 2.0, 3.0};
  return vec;
}


/* ---------------- as 2.2 --------------- */

bool fVector2D::operator==(const fVector2D &v2) const // const parameter: vector2 to be compared, const on (this)vector also, no copies!
{
    return (x_== v2.x_) && (y_ == v2.y_); // use standard== operator to define operator== by comparing (this)x_ standard== (vec2)x_ AND (this)y_ standard== (vec2)y_
}

fVector2D operator+(const fVector2D &v1, const fVector2D &v2) // returns the summed elements of v1 and v2 as a new fVector2D tuple
{
    return fVector2D(v1.x_ + v2.x_, v1.y_ + v2.y_); // use stdandard+ operator to define sum = v1 operator+ v2 = (x_1 stdandard+ x_2, y_1 standard+ y_2)
} 

void fVector2D::print_vec() // define print function
{
  std::cout << "(" << x_ << ", " << y_ << ")" <<std::endl;
}

/* 

I used ChatGPT on this part (as 2.2) to understand how to overload operators, the comments are my interpretation of how we can do this. 
I.e. I define two functions here that use the normal + and == operators and apply this on a vector1 and vector2 fVector2D objects, element-wise. 
I understood the .x_ and .y_ in terms of self.x and self.y for a class (/object) in python. 

*/

} // namespace homework
