/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <vector>
#include <string>

int main() { 
   using namespace homework;
  //for as1.0
  printHello();

  int a=5;
    AddOneRef(a);
    std::cout<<"after AddOneRef(5):"<<a<< std::endl;

  std::cout << "isOdd(3): " << std::boolalpha << isOdd(3) << std::endl;
  std::cout << "isOdd(4): " << std::boolalpha << isOdd(4) << std::endl;

  float f = 3.9f;
    int intValue = floatToInt(f);
    std::cout << "floatToInt(3.9): " << intValue << std::endl;

  std::cout << "factorial(5): " << factorial(5) << std::endl;  
  std::cout << "factorial(0): " << factorial(0) << std::endl;  
  std::cout << "factorial(-2): " << factorial(-2) << std::endl;


  //for as2.0
  Foo foo;
  std::cout << "Foo::bar(): " << foo.bar() << std::endl;
  std::cout << "Foo::baz(): " << foo.baz() << " (x set to " << foo.x << ")" << std::endl;

  std::vector<double> v = foo.quux();
  std::cout << "Foo::quux(): { ";
  for (double d : v) std::cout << d << " ";
  std::cout << "}" << std::endl;

  fVector2D vec1(1.0f, 2.0f);
  fVector2D vec2(3.0f, 4.0f);
  fVector2D vecSum = vec1 + vec2;

  std::cout << "vec1 + vec2 = (" << vecSum.getX() << ", " << vecSum.getY() << ")" << std::endl;

  fVector2D vec3(4.0f, 6.0f);
  std::cout << "vecSum == vec3? " << std::boolalpha << (vecSum == vec3) << std::endl;

  //for as3.0
  Apple myapple(Color::red);
  std::cout << "Apple name: " << myapple.getName() << std::endl;

  Color appleColor = myapple.getColor();
  std::string colorStr;
  switch (appleColor) {
    case Color::red:    colorStr = "red"; break;
    case Color::green:  colorStr = "green"; break;
    case Color::yellow: colorStr = "yellow"; break;
  }
  std::cout << "Apple color: " << colorStr << std::endl;

  std::cout << "Apple taste: " << myapple.getTaste() << std::endl;
  return 0;
}

