#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <vector>

int main() {
  std::cout << "Testing Assignment 1" << std::endl;

  // Testing printHello()
  homework::printHello();

  // Testing AddOneRef()
  int x = 1;
  homework::AddOneRef(x);
  std::cout << "AddOneRef(1): " << x << " (expected 2)" << std::endl;

  // Testing isOdd()
  std::cout << "isOdd(3): " << homework::isOdd(3) << " (expected 1)" << std::endl;
  std::cout << "isOdd(4): " << homework::isOdd(4) << " (expected 0)" << std::endl;
  std::cout << "isOdd(-3): " << homework::isOdd(-3) << " (expected 1)" << std::endl;
  std::cout << "isOdd(-4): " << homework::isOdd(-4) << " (expected 0)" << std::endl;

  // Testing floatToInt()
  std::cout << "floatToInt(3.14f): " << homework::floatToInt(3.14f) << " (expected 3)" << std::endl;
  std::cout << "floatToInt(-3.14f): " << homework::floatToInt(-3.14f) << " (expected -3)" << std::endl;

  // Testing factorial()
  std::cout << "factorial(0): " << homework::factorial(0) << " (expected 1)" << std::endl;
  std::cout << "factorial(1): " << homework::factorial(1) << " (expected 1)" << std::endl;
  std::cout << "factorial(5): " << homework::factorial(5) << " (expected 120)" << std::endl;
  std::cout << "factorial(-1): " << homework::factorial(-1) << " (expected -1)" << std::endl;

  std::cout << "\nTesting Assignment 2" << std::endl;

  // Testing Foo
  homework::Foo foo{};
  std::cout << "foo.bar(): " << foo.bar() << " (expected 42)" << std::endl;
  std::cout << "foo.baz(): " << foo.baz() << " (expected 3.14)" << std::endl;
  std::cout << "foo.x: " << foo.x << " (expected 2.71)" << std::endl;
  std::cout << "foo.quux() == {1.0, 2.0, 3.0}? " << (foo.quux() == std::vector<double>{1.0, 2.0, 3.0}) << " (expected 1)" << std::endl;

  // Testing fVector2D
  homework::fVector2D v2{1.0f, 2.5f};
  homework::fVector2D w2{3.2f, 4.8f};
  homework::fVector2D result = v2 + w2;

  std::cout << "(v2 + w2) == fVector2D(4.2, 7.3)? " << (result == homework::fVector2D{4.2f, 7.3f}) << " (expected 1)" << std::endl;

  std::cout << "\nTesting Assignment 3" << std::endl;

  // Testing Color enum
  homework::Color color = homework::Color::red;
  std::cout << "Color::red test: " << (color == homework::Color::red) << " (expected 1)" << std::endl;

  // Testing Apple
  homework::Apple greenApple(homework::Color::green);
  std::cout << "greenApple.getName(): " << greenApple.getName() << " (expected apple)" << std::endl;
  std::cout << "greenApple.getColor() == Color::green? " << (greenApple.getColor() == homework::Color::green) << " (expected 1)" << std::endl;
  std::cout << "greenApple.getTaste(): " << greenApple.getTaste() << " (expected sweet)" << std::endl;

  homework::Apple redApple(homework::Color::red);
  std::cout << "redApple.getName(): " << redApple.getName() << " (expected apple)" << std::endl;
  std::cout << "redApple.getColor() == Color::red? " << (redApple.getColor() == homework::Color::red) << " (expected 1)" << std::endl;
  std::cout << "redApple.getTaste(): " << redApple.getTaste() << " (expected sweet)" << std::endl;

  return 0;
}
