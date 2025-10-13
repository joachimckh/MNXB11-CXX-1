/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  int x = 3;
  std::cout << &x << std::endl;
  homework::AddOneRef(x);
  std::cout << &x << std::endl;

}

