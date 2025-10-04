#include "as3.hpp"
using namespace std;

namespace homework {

Fruit::Fruit(const string& name, Color c) : name_(name), color_(c) { }
Fruit::~Fruit() = default;

string Fruit::getName() const { return name_; }
Color Fruit::getColor() const { return color_; }

Apple::Apple(Color c) : Fruit("apple", c) { }
string Apple::getTaste() const { return "sweet"; }

}



