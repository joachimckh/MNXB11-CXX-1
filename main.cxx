/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <vector>

int main() { 
  // Example for as1.0
  //homework::printHello();

  int i = 2;

   std::cout << i << std::endl;

   homework::AddOneRef(i);

   std::cout << i << std::endl;

  int y = 13;

   std::cout << y << std::endl;

   std::cout << homework::isOdd(y) << std::endl;
  //returns through a boolean statement, 1 is true, 0 not.

  float x = 4.2;

   std::cout << homework::floatToInt(x) << std::endl;

  int n = -3;

   std::cout << homework::factorial(n) << std::endl;


  //std::cout << homework::test() << std::endl;
  
  homework::fVector2D a(1.1, 2.0); 

  homework::fVector2D b(1.2, 2.1); 

  homework::fVector2D c = a + b; 

  std::cout << c << std::endl;

  if (a == b) { std::cout << "both elements are equal" << std::endl; 
  } else { std::cout << "elements are not equal" << std::endl; }


  //as3

  //std::cout << getColor() << std::endl;

  homework::Apple newapple(homework::Color::green);

  // the same below can be repeated for the other colors 

  if (newapple.getColor() == homework::Color::green) {
    std::cout << "green" << std::endl;
  }

  std::cout << newapple.getName() << std::endl;

  std::cout << newapple.getTaste() << std::endl;

  return 0;


}

