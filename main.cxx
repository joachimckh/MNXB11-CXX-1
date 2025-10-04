/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>
using namespace std;

int main() { 
  // Example for as1.0
  homework::printHello();

  // as 1.1
  int variable = 4;
  cout << "Before: " << variable << endl;
  homework::AddOneRef(variable);
  cout << "After: " << variable << endl;

  // as 1.2
  cout << "The value of the variable is " << variable << ". Is this an odd number?\n" ;
  if (homework::isOdd(variable)) {std::cout << "true \n";}
  else {std::cout << "false \n";}
  
  homework::AddOneRef(variable);
  cout << "The value of the variable is " << variable << ". Is this an odd number?\n" ;
  if (homework::isOdd(variable)) {std::cout << "true \n";}
  else {std::cout << "false \n";}

  
}

