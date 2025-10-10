#include "as1.hpp"
#include <iostream>
#include <cmath>

int main() { 
  // Example for as1.0
  homework::printHello();


  // as1.1, addoneref
  int x;
  std::cout << "Please enter an integer" << '\n';
  std::cin >> x;
  homework::AddOneRef(x);


  //as1.2, boolisOdd
  std::cout << "Enter an integer" << '\n';
  std::cin >> x; 
  if(homework::isOdd(x)==true)
    std::cout << x << " is odd." << '\n';
  else
    std::cout << x << " is even." << '\n';

  return 0;


  //as1.3, floatToInt
  int intvalue = static_cast<int>(std::round(x));
  std::cout << "The int for float value " << x << "is " << intvalue << '\n';
  return 0;


  //as1.4, factorial
  std::cout << "enter an integer greater than 0" << '\n';
  std::cin >> x;
  if (x <= 0)
    return -1;
  else
    std::cout << "the factorial of " << x << " is " << homework::factorial(x) << '\n';
}

