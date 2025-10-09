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
  int a=5;
  std::cout << homework::AddOneRef(a) << std::endl;
  std::cout<< homework::isOdd(4)<<std::endl;
  std::cout<< homework::isOdd(3)<<std::endl;
  std::cout<< homework::floatToInt(2.7) <<std::endl;
  std::cout<< homework::factorial(5) <<std::endl;
  std::cout<< "Excercise2"<<std::endl;
  homework::Foo b;
  std::cout << b.bar() << std::endl; 
  std::cout << b.baz() << std::endl; 
  std::cout << b.x << std::endl; 
  std::vector<double> v = b.quux();
  for (double val : v) {
      std::cout << val << " ";
  }
  std::cout << std::endl;

homework::fVector2D v1(1.0, 2.0);
homework::fVector2D v2(2.0, 3.0);
homework::fVector2D v3 = v1 + v2;
homework::fVector2D v4(3.0, 5.0);
std::cout<<(v3==v4)<<std::endl;
std::cout<<(v1==v2)<<std::endl;
std::cout<< "Excercise3"<<std::endl;

homework::Apple j1(homework::Color::red);
std::cout<<j1.getTaste()<<std::endl;

}

