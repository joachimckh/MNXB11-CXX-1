/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

int main() { 

  /* ---------------asignment 1-------------------*/

  // Example for as1.0
  homework::printHello();

  // test AddOneRef()
  int x;
  homework::AddOneRef(x); // seems to work, but can't print since void(?)

  // test isOdd()
  int y = 3;
  int z = 4;
  int f = -3;

  std::cout << homework::isOdd(y) << std::endl; // prints 1 = true 
  std::cout << homework::isOdd(z) << std::endl; // prints 0 = false
  std::cout << homework::isOdd(f) << std::endl; // prints 1 = true 


  // test floatToInt()
  float a = 0.10;
  float b = 3.77;
  std::cout << homework::floatToInt(a) << std::endl; // prints 0
  std::cout << homework::floatToInt(b) << std::endl; // prints 3


  // test factorial()
  int n = 3;
  int nn = 4;
  int nnn = 0;
  int nnnn = -10;

  
  std::cout << homework::factorial(n) << std::endl;  // prints 6 = 3*2*1
  std::cout << homework::factorial(nn) << std::endl; // prints 24 = 4*3*2*1
  std::cout << homework::factorial(nnn) << std::endl; // prints 1
  std::cout << homework::factorial(nnnn) << std::endl; // prints -1
  
  


  /*-------------assignment 2-------------------*/


  homework::fVector2D v1(3,2);
  homework::fVector2D v2(2,2);

  homework::fVector2D v3 = v1 + v2;

  if (v1==v2)
    std::cout << "the vectors are equal" << std::endl;
  else
    std::cout << "the vectors are not equal" << std::endl;

  v3.print_vec();

  // seems to work!


}

