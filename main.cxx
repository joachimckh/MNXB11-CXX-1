/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <vector>
#include <string>

int main() { 
  // as1
  std::cout << "Assignment 1: " << std::endl;

  homework::printHello();
  int a = 1;
  std::cout << "a = 1 " << std::endl;
  homework::AddOneRef(a);
  std::cout << "and a is now " << a << std::endl;
  std::cout << "1 should be the ouput: " << homework::isOdd(3) << std::endl;
  std::cout << homework::floatToInt(3.14) << " is the output and the answer is 3" << std::endl;
  std::cout << homework::factorial(6) << " is the output and the answer is 720" << std::endl;
  
  // as2
  std::cout << "Assignment 2: " << std::endl;

  homework::Foo foo;
  std::cout << "bar() returns: " << foo.bar() << std::endl;
  std::cout << "baz() returns: " << foo.baz() << std::endl;
  std::cout << "the member variable is: " << foo.x << std::endl;
  std::cout << "quux returns: ";
  std::cout << "{ ";
  for (float val : foo.quux()) {
    std::cout << val << " ";
  }
  std::cout << "}" << std::endl;

  homework::fVector2D V1{1.0f, 2.0f};
  std::cout << "V1 is (1.0, 2.0), ";
  homework::fVector2D V2{2.0f, 4.0f};
  std::cout << "V2 is (2.0, 4.0), and ";
  homework::fVector2D V3{3.0f, 6.0f};
  std::cout << "V3 is (3.0, 6.0)" << std::endl;
  std::cout << "The operation (V1 + V2 == V3) should return 1 if correctly implemented:" << std::endl;

  std::cout << (V1 + V2 == V3) << std::endl;

  // as3
  std::cout << "Assignment 3: " << std::endl;

  homework::Color col = homework::Color::yellow;
  std::cout << "functionality check of color should return 1:" << std::endl;
  std::cout << (col == homework::Color::yellow) << std::endl;
  
  homework::Apple apple{homework::Color::red};
  std::cout << "functionality check 2 to see if the apple has all the properties it should, or that they are checked correctly" << std::endl;
  std::cout << "answer should be 1: " << (apple.getColor() == homework::Color::red) << std::endl;
  std::cout << "answer should be 1: " << (apple.getName() == "apple") << std::endl;
  std::cout << "answer should be 1: " << (apple.getTaste() == "sweet") << std::endl;

}

