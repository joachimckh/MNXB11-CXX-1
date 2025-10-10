/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() { 
 // Tests for as1
  homework::printHello();
  int a = 5;
  std::cout << homework::isOdd(a)<< std::endl;
  float b = 13.0f;
  std::cout << homework::floatToInt(b)<< std::endl;
  std::cout << homework::factorial(a)<< std::endl;

  // Tests for as2
  homework::Foo fofo; // structure foo
  std::cout<< fofo.bar() << std::endl;
  std::cout<< fofo.baz() << std::endl;
  std::cout<< fofo.x << std::endl;
  std::vector<double> v = fofo.quux();
  for (double val : v) {
      std::cout << val << " ";
  }
  std::cout<< std::endl;

  homework::fVector2D v1(1,2); // class fVector2D
  homework::fVector2D v2(3,4);
  homework::fVector2D v3(2,4);
  homework::fVector2D v4 = v1+v1;
  bool isittrue = v1==v2;
  std::cout << isittrue << std::endl;
  bool issumtrue = v3==v4;
  std::cout << issumtrue << std::endl;

  // Tests for as3
  homework:: Apple jabloko(homework::Color::red);
  std::cout<< jabloko.getTaste() << std::endl;
}

