/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
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

   //TESTING as2.cxx
   //part 1
   homework::Foo foo{};
   std::cout << foo.bar() << std::endl;
   std::cout << foo.baz() << std::endl;
   std::cout << (foo.quux() == std::vector<double>{1.0,2.0,3.0}) << std::endl;
   std::cout << foo.x << std::endl;
   

   //part 2

   homework::fVector2D v2{1.0f, 2.5f};
   homework::fVector2D w2{3.2f, 4.8f};
   std::cout<< (v2 + w2 == homework::fVector2D{4.2f, 7.3f})<< std::endl;

   //TESTING as3.hpp
   //testing color
   homework::Color c = homework::Color::red;
   std::cout << (c == homework::Color::red) << std::endl;
   //testing apple

   homework::Apple apple{homework::Color::green};
   std::cout << (apple.getColor() == homework::Color::green)<<std::endl;
   std::cout << (apple.getName() == "apple") <<std::endl;
   std::cout << (apple.getTaste() == "sweet")<<std::endl;


   

}

