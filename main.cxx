/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
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
}

