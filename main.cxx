/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() { 
  // prints booleans as true/false rather than 1/0
  std::cout.setf(std::ios::boolalpha);



  // Assignment 1 

  std:: cout << "------------------------------" << std::endl;
  std::cout << "Assignment 1" << std::endl;
  std:: cout << "------------------------------" << std::endl;

  // Example for as1.0
  homework::printHello();

  int x = 1;
  homework::AddOneRef(x);
  std::cout << "x = 1, x + 1 = " << x << std::endl;

  std::cout << "3 is odd: " << homework::isOdd(3) << std::endl;
  std::cout << "4 is odd: " << homework::isOdd(4) << std::endl;
  std::cout << "-3 is odd: " << homework::isOdd(-3) << std::endl;
  std::cout << "-4 is odd: " << homework::isOdd(-4) << std::endl;

  x = 3.14f;
  std::cout << "3.14 as an int is " << homework::floatToInt(x) << std::endl;
  std::cout << "-3.14 as an int is " << homework::floatToInt(-x) << std::endl;


  std::cout << "0! = " << homework::factorial(0) << std::endl;
  std::cout << "1! = " << homework::factorial(1) << std::endl;
  std::cout << "5! = " << homework::factorial(5) << std::endl;
  std::cout << "(-1)! = " << homework::factorial(-1) << std::endl;

  std:: cout << "------------------------------" << std::endl;



  // Assignment 2

  std:: cout << "------------------------------" << std::endl;
  std::cout << "Assignment 2" << std::endl;
  std:: cout << "------------------------------" << std::endl;

  homework::Foo foo{};

  std::cout << foo.bar() << std::endl;
  std::cout << foo.baz() << std::endl;
  std::cout << foo.x << std::endl;
  std::cout << (foo.quux() == std::vector<double>{1.0, 2.0, 3.0}) << std::endl;

  homework::fVector2D v2{1.0f, 2.5f};
  homework::fVector2D w2{3.2f, 4.8f};
  std::cout << ((v2 + w2) == homework::fVector2D{4.2f, 7.3f}) << std::endl;

  std:: cout << "------------------------------" << std::endl;



  // Assignment 3

  std:: cout << "------------------------------" << std::endl;
  std::cout << "Assignment 3" << std::endl;
  std:: cout << "------------------------------" << std::endl;

  homework::Color c = homework::Color::red;
  std::cout << (c == homework::Color::red) << std::endl;

  homework::Apple apple{homework::Color::green};
  std::cout << (apple.getColor() == homework::Color::green) << std::endl;
  std::cout << (apple.getName() == "apple") << std::endl;
  std::cout << (apple.getTaste() == "sweet") << std::endl;

  std:: cout << "------------------------------" << std::endl;
}

