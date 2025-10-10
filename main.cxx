/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"


#include <iostream>
#include <string>

int main() { 
  // Example for as1.0
  //testing as1
  homework::printHello();
  //testing the AddOneRef function from asq1.cxx
  int x=5;
  homework::AddOneRef(x);
  std::cout << x << std::endl;
  //testing the isodd function from asq1.cxx
  std::cout << homework::isOdd(x)<< std::endl;
  //testing the factorial function from asq1.cxx with different values
  std::cout << homework::factorial(x)<< std::endl;
  std::cout << homework::factorial(-x)<< std::endl;
  std::cout << homework::factorial(0)<< std::endl;
  //testing the float function from asq1.cxx with different values
  std::cout << homework::floatToInt(3.5)<< std::endl;


  //testing as2
  //testing FOO
  homework::Foo foo;
  std::cout << "foo.bar(): " << foo.bar() << " (expected 42)" << std::endl;
  std::cout << "foo.baz(): " << foo.baz() << " (expected 3.14)" << std::endl;
  std::cout << "foo.x: " << foo.x << " (expected 2.71)" << std::endl;
  std::cout << "foo.quux() == {1.0, 2.0, 3.0}? " << (foo.quux() == std::vector<double>{1.0, 2.0, 3.0}) << " (expected 1)" << std::endl;

  // Test fVector2D
  homework::fVector2D a2(1.0f, 2.0f);
  homework::fVector2D b2(3.0f, 4.0f);
  homework::fVector2D c2 = a2 + b2;

  std::cout << "a2 + b2 == fVector2D(4,6)? " << (c2 == homework::fVector2D(4.0f, 6.0f)) << " (expected 1)" << std::endl;

  homework::fVector2D d2(4.0f, 6.0f);
  std::cout << "c2 == d2? " << (c2 == d2) << " (expected 1)" << std::endl;

  homework::fVector2D e2(0.0f, 0.0f);
  std::cout << "a2 == e2? " << (a2 == e2) << " (expected 0)" << std::endl;


  //testing as3
  homework::Color c = homework::Color::red;
  std::cout <<(c == homework::Color::red) << std::endl;


  homework::Apple apple{homework::Color::green};
  std::cout << (apple.getColor() == homework::Color::green)<< std::endl;
  std::cout << (apple.getName() == "apple")<< std::endl;
  std::cout << (apple.getTaste() == "sweet")<< std::endl;

}

