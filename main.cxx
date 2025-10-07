/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>
#include "as2.hpp"
#include "as3.hpp"

int main() { 
  // Example for as1.0
  //int x{-2};
  homework::printHello();
  //homework::AddOneRef(x);
  //std::cout << "should be -1 " << x << std::endl;
  //std::cout << "should be (1) " << homework::isOdd(x) << std::endl;
  //std::cout << homework::floatToInt(-13.7) << " should be " << -14 << std::endl;
  //std::cout << homework::floatToInt(1.3) << " should be " << 1 << std::endl;
  //std::cout << homework::floatToInt(13.7) << " should be " << 14 << std::endl;
  //std::cout << homework::factorial(3) << " should be 6" << std::endl;
  //std::cout << homework::factorial(5) << " should be 120" << std::endl;
  //std::cout << homework::factorial(-3) << " should be -1" << std::endl;
  
  homework::fVector2D vec1{1,2};
  homework::fVector2D vec2{4,2};
  std::cout << (vec1 + vec2) << " addition" << std::endl;
  std::cout << (vec1 == vec1) << " eq" << std::endl; 

  //homework::Apple apple{homework::Color::Green};
  //std::cout << homework::to_string(apple.getColor()) << " is green" << std::endl;
  //std::cout << apple.getName() << " is apple" << std::endl;
  //std::cout << apple.getTaste() << " is sweet" << std::endl;


}

