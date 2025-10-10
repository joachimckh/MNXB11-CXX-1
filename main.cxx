/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"

#include <iostream>

int main() { 
  // Example for as1.0
  //testing 1
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

}

