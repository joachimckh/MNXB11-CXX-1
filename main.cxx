/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  int x{-2};
  homework::printHello();
  homework::AddOneRef(x);
  std::cout << "should be -1 " << x << std::endl;
  std::cout << "should be (1) " << homework::isOdd(x) << std::endl;
  std::cout << homework::floatToInt(-13.7) << " should be " << -14 << std::endl;
  std::cout << homework::floatToInt(1.3) << " should be " << 1 << std::endl;
  std::cout << homework::floatToInt(13.7) << " should be " << 14 << std::endl;
  std::cout << homework::factorial(3) << " should be 6" << std::endl;
  std::cout << homework::factorial(5) << " should be 120" << std::endl;
  std::cout << homework::factorial(-3) << " should be -1" << std::endl;
  
}

