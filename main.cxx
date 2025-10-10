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
  //unsure how to properly test for foo.quux()

  //testing 2.2

  homework::fVector2D a(0.0f,1.0f);
  homework::fVector2D b(2.0f,3.0f);
  homework::fVector2D ab = a + b;
  homework::fVector2D test(2.0f, 4.0f);

  if (ab == test){
    std::cout<<"true\n";}
  else {
    std::cout<<"false\n";
  };
  //seems to work


  //testing 3 a)
  

  homework::Color col1 = homework::Color::red;
  homework::Color col2 = homework::Color::green;
  homework::Color col3 = homework::Color::yellow;

  if(col1 == homework::Color::red){
    std::cout<<"First color is red\n";
  };

  if(col2 == homework::Color::green){
    std::cout<<"Second color is green\n";
  };

  if(col3 == homework::Color::yellow){
    std::cout<<"Third color is yellow\n";
  };

  //testing 3 b)

  homework::Fruit banana("banana", homework::Color::yellow);

  std::cout<<"The test fruit name is "<< banana.getName() <<std::endl;
  std::cout<<"The test fruit tastes "<< banana.getTaste() <<std::endl;

  if(banana.getColor() == homework::Color::yellow){
    std::cout<<"The test fruit is yellow\n";
  };

  //testing 3 c)
  homework::Apple testapple(homework::Color::red);
  std::cout<<"The fruit is an "<<testapple.getName()<<std::endl;
  std::cout<<"The fruit tastes "<<testapple.getTaste()<<std::endl;

  if(testapple.getColor() == homework::Color::red){
    std::cout<<"This is a normal, healthy apple.\n";
  };
}