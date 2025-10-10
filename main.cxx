/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  std::cout << "Testing Assignment 1" << std::endl;
  homework::printHello();

  // Test 1: AddOneRef()
  int a = 1;
  homework::AddOneRef(a);
  std::cout << "AddOneRef(1): " << a << " (expected 2)" << std::endl;

  int b = -3;
  homework::AddOneRef(b);
  std::cout << "AddOneRef(-3): " << b << " (expected -2)" << std::endl;

  // Test 2: isOdd()
  std::cout << "isOdd(1): " << homework::isOdd(3) << " (expected 1)" << std::endl;
  std::cout << "isOdd(2): " << homework::isOdd(4) << " (expected 0)" << std::endl;
  std::cout << "isOdd(-3): " << homework::isOdd(-3) << " (expected 1)" << std::endl;
  std::cout << "isOdd(-4): " << homework::isOdd(-4) << " (expected 0)" << std::endl;

  // Test 3: floatToInt()
  std::cout << "floatToInt(3.14): " << homework::floatToInt(3.14) << " (expected 3)" << std::endl;
  std::cout << "floatToInt(-9.99): " << homework::floatToInt(-9.99) << " (expected -9)" << std::endl;
  std::cout << "floatToInt(0.99999): " << homework::floatToInt(0.9999) << " (expected 0)" << std::endl;

  // Test 4: factorial()
  std::cout << "factorial(-1): " << homework::factorial(-1) << " (expected -1)" << std::endl;
  std::cout << "factorial(0): " << homework::factorial(0) << " (expected 1)" << std::endl;
  std::cout << "factorial(1): " << homework::factorial(1) << " (expected 1)" << std::endl;
  std::cout << "factorial(7): " << homework::factorial(7) << " (expected 5040)" << std::endl;

  return 0;
}
