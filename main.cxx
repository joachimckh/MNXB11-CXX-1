/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <vector>
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
  cout << boolalpha; //so that it prints true/false instead of 1/0. 
  cout << "The value of the variable is " << variable << ". Is this an odd number?\n" ;
  cout << homework::isOdd(variable) << endl;
  
  homework::AddOneRef(variable);
  cout << "The value of the variable is " << variable << ". Is this an odd number?\n" ;
  cout << homework::isOdd(variable) << endl;

  // as 1.3
  float initial_float = 3.9;
  int truncated_float = homework::floatToInt(initial_float);
  cout << "The float " << initial_float << " was casted to the integer " << truncated_float << ". \n";
  
  // as 1.4
  int n = 5;
  cout << n << "! = " << homework::factorial(n) << endl;
  int negative = -4;
  cout << negative << "! = " << homework::factorial(negative) << endl;
  

  // as2:
  //2.1
  homework::Foo f;
  cout << "bar: " << f.bar() << endl;
  cout << "baz: " << f.baz() << endl;
  cout << "x: " << f.x << endl;
  
  vector<double> vec = f.quux();
  cout << "quux: {" << vec[0] << ", " << vec[1] << ", " << vec[2] << "} \n ";

  //2.2
  // test operators

  homework::fVector2D a(1.3, 3);
  homework::fVector2D b(2, 1.2);
  homework::fVector2D c = a + b;
  homework::fVector2D expected_c(3.3, 4.2);
  homework::fVector2D d(1.3, 3);

  if (a == d) { cout << "== operator works \n";} 
  else {cout << "== operator does not work \n";}

  if (c == expected_c) {cout << "+ operator works \n";}
  else {cout << "+ operator does not work \n" ;}
  

  homework::Apple apple_1(homework::Color::green); // Im creating an object of class Apple with base class Fruit
  homework::Apple apple_2(homework::Color::red);

  cout << apple_1.getName() << " has color " << printColor(apple_1.getColor()) 
       << " and taste " << apple_1.getTaste() << ".\n";
  cout << apple_2.getName() << " has color " << printColor(apple_2.getColor()) 
       << " and taste " << apple_2.getTaste() << ".\n";

}

