/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <string>

int main() { 
  // Example for as1.0

  //testing exercise 1

  homework::printHello();
  int x=4;

  homework::AddOneRef(x);
  int q=3;

  homework::isOdd(q);
  float w=-3.14f;
  
  homework::floatToInt(w);
  int r=-5;

  homework::factorial(r);

  //all seems to work for ex. 1
  x=0;

  //testing 2.1

  homework::Foo foo;
  std::cout<<"foo.bar() is "<< foo.bar()<<std::endl;
  std::cout<<"foo.baz() is "<< foo.baz()<<std::endl;
  std::cout<<"foo.x() is "<< foo.x <<std::endl; //appears to yield the incorrect value. not sure why.

  //testing 2.2

  homework::fVector2D a(0.0f,1.0f);
  homework::fVector2D b(2.0f,3.0f);
  homework::fVector2D ab = a + b;
  homework::fVector2D test(2.0f, 4.0f);

  if (ab == test){
    std::cout<<"true"<<std::endl;
  }
  else {
    std::cout<<"false"<<std::endl;
  }
  //seems to work
}

