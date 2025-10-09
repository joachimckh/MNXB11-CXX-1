/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

// #include "include/as1.hpp"
// #include "include/as2.hpp"
#include "include/as3.hpp"
#include <iostream>

// int main() { 
//   // Example for as1.0
//   homework::printHello();
//   return 0;
// }

// int main() {
//   int a = 2;
//   homework::AddOneRef(a);
//   std::cout << "a = " << a << std::endl;
//   return 0;
// }

// int main() {
//   int a = 7;
//   if (homework::isOdd(a) == false) 
//     std::cout << a << " is even" << std::endl;
//   else 
//     std::cout << a << " is odd" << std::endl;
//   return 0;
// }

// int main() {
//   float x = 5.99;
//   std::cout << "the float " << x << " is integer " << homework::floatToInt(x) << std::endl;
//   return 0;
// }

// int main() {
//   int n = 9;
//     std::cout << "the factorial of " << n << " is " << homework::factorial(n) << std::endl;
//     return 0;
// }

// int main() {
//   homework::Foo f;
//   std::cout << "bar() = " << f.bar() << std::endl;
//   std::cout << "baz() = " << f.baz() << std::endl;
//   std::cout << "quuz() = {";
//   for (double i: f.quux())
//       std::cout << i << ' ';
//       std::cout << "}" << std::endl;

//   return 0;
// }


// int main() {
//   homework::fVector2D vector1(1.0, 2.0);
//   homework::fVector2D vector2(3.0, 4.0);

//   homework::fVector2D vector3 = (vector1 + vector2);

//   std::cout << "vector1 + vector 2 = {" << vector3.getX() << " " << vector3.getY() << std::endl;
//   return 0;
// }

int main() {
  homework::Apple a(homework::Color::red);

  std::cout << "Name: " << a.getName() << "\n";
  std::cout << "Taste: " << a.getTaste() << "\n";

  // got this structure from chat GPT when I asked how to find out the color
  std::cout << "Color: ";
  switch (a.getColor()) {
    case homework::Color::red: std::cout << "red"; break;
    case homework::Color::green: std::cout << "green"; break;
    case homework::Color::yellow: std::cout << "yellow"; break;
  }
  std::cout << std::endl;

  return 0;
}