/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() { 
  std::cout << "Testing Assignment 1" << std::endl;
  homework::printHello();

  // Test 1: AddOneRef()
  int a = 1;
  homework::AddOneRef(a);
  std::cout << "AddOneRef(1): " << a << " (expected 2)" << std::endl;

  int b = -3;
  homework::AddOneRef(b);
  std::cout << "AddOneRef(-3): " << b << " (expected -2)" << std::endl;

  // Test 2: isOdd()
  std::cout << "isOdd(1): " << homework::isOdd(3) << " (expected 1)" << std::endl;
  std::cout << "isOdd(2): " << homework::isOdd(4) << " (expected 0)" << std::endl;
  std::cout << "isOdd(-3): " << homework::isOdd(-3) << " (expected 1)" << std::endl;
  std::cout << "isOdd(-4): " << homework::isOdd(-4) << " (expected 0)" << std::endl;

  // Test 3: floatToInt()
  std::cout << "floatToInt(3.14f): " << homework::floatToInt(3.14f) << " (expected 3)" << std::endl;
  std::cout << "floatToInt(-9.99f): " << homework::floatToInt(-9.99f) << " (expected -9)" << std::endl;
  std::cout << "floatToInt(0.99999f): " << homework::floatToInt(0.9999f) << " (expected 0)" << std::endl;

  // Test 4: factorial()
  std::cout << "factorial(-8): " << homework::factorial(-8) << " (expected -1)" << std::endl;
  std::cout << "factorial(0): " << homework::factorial(0) << " (expected 1)" << std::endl;
  std::cout << "factorial(1): " << homework::factorial(1) << " (expected 1)" << std::endl;
  std::cout << "factorial(7): " << homework::factorial(7) << " (expected 5040)" << std::endl;

  std::cout << "Testing Assignment 2" << std::endl;

  // Test 5: Foo
  homework::Foo foo;
  std::cout << "foo.bar(): " << foo.bar() << " (expected 42)" << std::endl;
  std::cout << "foo.baz(): " << foo.baz() << " (expected 3.14)" << std::endl;
  std::cout << "foo.x: " << foo.x << " (expected 2.71)" << std::endl;
  std::cout << "foo.quux() == {1.0, 2.0, 3.0}? " << (foo.quux() == std::vector<double>{1.0, 2.0, 3.0}) << " (expected 1)" << std::endl;

  // Test 6: fVector2D
  homework::fVector2D a2(1.0f, 2.0f);
  homework::fVector2D b2(3.0f, 4.0f);
  homework::fVector2D c2 = a2 + b2;

  std::cout << "a2 + b2 == fVector2D(4,6)? " << (c2 == homework::fVector2D(4.0f, 6.0f)) << " (expected 1)" << std::endl;

  homework::fVector2D d2(4.0f, 6.0f);
  std::cout << "c2 == d2? " << (c2 == d2) << " (expected 1)" << std::endl;

  homework::fVector2D e2(0.0f, 0.0f);
  std::cout << "a2 == e2? " << (a2 == e2) << " (expected 0)" << std::endl;

  homework::Apple myApple(homework::Color::red);

    std::cout << "Name: " << myApple.getName() << "\n";
    std::cout << "Taste: " << myApple.getTaste() << "\n";

    homework::Color fruit_color = myApple.getColor();
    if (fruit_color == homework::Color::red) std::cout << "Color: red\n";
    else if (fruit_color == homework::Color::green) std::cout << "Color: green\n";
    else if (fruit_color == homework::Color::yellow) std::cout << "Color: yellow\n";

  return 0;
}