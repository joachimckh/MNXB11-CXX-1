/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "include/as1.hpp"
#include <iostream>

// int main() { 
//   // Example for as1.0
//   homework::printHello();
//   return 0;
// }

// int main() {
//   int a = 2;
//   homework::AddOneRef(a);
//   std::cout << "a = " << a << std::endl;
//   return 0;
// }

// int main() {
//   int a = 7;
//   if (homework::isOdd(a) == false) 
//     std::cout << a << " is even" << std::endl;
//   else 
//     std::cout << a << " is odd" << std::endl;
//   return 0;
// }

// int main() {
//   float x = 5.99;
//   std::cout << "the float " << x << " is integer " << homework::floatToInt(x) << std::endl;
//   return 0;
// }

int main() {
  int n = 9;
    std::cout << "the factorial of " << n << " is " << homework::factorial(n) << std::endl;
    return 0;
}
