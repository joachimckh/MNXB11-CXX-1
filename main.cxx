/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();
  int a = 1;
  std::cout << "a = 1 " << std::endl;
  homework::AddOneRef(a);
  std::cout << "and a is now " << a << std::endl;
  std::cout << homework::isOdd(3) << " is the output and the answer is 1" << std::endl;
  std::cout << homework::floatToInt(3.14) << " is the output and the answer is 3" << std::endl;
  std::cout << homework::factorial(6) << " is the output and the answer is 720" << std::endl;
}

