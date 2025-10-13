/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();
int x = 3;
std::cout << x << std::endl; 
homework::AddOneRef(x);
std::cout << x << std::endl;

  homework::isOdd(23);

  homework::floatToInt(25.7);
int n=4;
  homework::factorial(n);
  std::cout << "The factorial of " << n << " is " << homework::factorial(n) << std::endl;

return 0;}
