#include "as3.hpp"

namespace homework {

Fruit::Fruit(const std::string& name, Color c) : name_(name), color_(c) {}
Fruit::~Fruit() = default;

std::string Fruit::getName() const {
  return name_;
}

Color Fruit::getColor() const {
  return color_;
}

Apple::Apple(Color c)
  : Fruit("apple", c) {}

std::string Apple::getTaste() const {
  return "sweet";
}

} // namespace homework



