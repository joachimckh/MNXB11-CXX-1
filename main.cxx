/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>


int main() { 
  // Example for as1.0
  homework::printHello();

  //testing as1.cxx AddOneRef
  int x = 1;
  homework::AddOneRef(x);
  std::cout << x << std::endl;
  //testing as1.cxx  is Odd
  std::cout << homework::isOdd(3) << std::endl;
  std::cout <<homework::isOdd(4)<< std::endl;
  //testing as1.cxx floatToInt
  std::cout << homework::floatToInt(2.71) << std::endl;
  std::cout << homework::floatToInt(-2.71) << std::endl;
  //testing as1.cxx 
  std::cout << homework::factorial(7) << std::endl;
  std::cout << homework::factorial(0) << std::endl;
  std::cout << homework::factorial(-4)<< std::endl;

}

