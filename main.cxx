/** Use this main to test exercises. See the example with 'as1.0' below.
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <vector>
#include <iostream>

int main()
{
  // Example for as1.0
  std::cout << "Part 1 \n" << std::endl;
  homework::printHello();
  int x = 5;
  homework::AddOneRef(x);
  homework::isOdd(5);
  homework::floatToInt(5.5);
  homework::factorial(5);
  homework::factorial(-5);
  std::cout << "Part 2 \n" << std::endl;

  std::cout << homework::Foo().bar() << std::endl;
  std::cout << homework::Foo().baz() << std::endl;
  std::vector<double> vec = homework::Foo().quux();
  homework::fVector2D veco{1.0, 2.0};
  homework::fVector2D vecto{3.0, 4.0};
  std::cout << veco + vecto << std::endl;
  veco == vecto;
  veco == veco;

  std::cout << "\nPart 3 \n" << std::endl;
  homework::Color red{red};
  homework::Color yellow{yellow};
  homework::Apple apple(red);
  homework::Apple apple2(yellow);
  homework::Fruit &fruit = apple;
  homework::Fruit &fruit2 = apple2;
  std::cout << fruit.getColor() << std::endl;
  std::cout << fruit.getName() << std::endl;
  std::cout << fruit.getTaste() << std::endl; 
  std::cout << fruit2.getColor() << std::endl;
  std::cout << fruit2.getName() << std::endl;
  std::cout << fruit2.getTaste() << std::endl;
 
  
}
