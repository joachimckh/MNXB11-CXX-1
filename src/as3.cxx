#include "as3.hpp"

namespace homework {

std::string printColor(Color color) {
  switch (color) { // switches value in enum with a string 
    case Color::red: return "red";
    case Color::green: return "green";
    case Color::yellow: return "yellow";
    default: return "none"; //needed, otherwise warning because compliler does not know how many arguments there are
  }
}

Fruit::Fruit(const std::string& name, Color color) { // constructor. It assigns values to the internal data
    this->name = name; // this->  is a pointer that points to current fruit object
    this->color = color;
}

std::string Fruit::getName() { // getter function that returns stored data
    return name;
}

Color Fruit::getColor() {
    return color;
}

// apple constructor
Apple::Apple(Color color)
    : Fruit("Apple", color) {}// base constructor called. makes Fruit object of subclass Apple

std::string Apple::getTaste() const {
    return "sweet";
}


} // namespace homework

