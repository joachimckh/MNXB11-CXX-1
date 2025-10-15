#include "as3.hpp"

namespace homework {

Fruit::Fruit(const std::string& name, Color color)
    : name(name), color(color) {}

std::string Fruit::getName() const {return name;}

Color Fruit::getColor() const {return color;}


Apple::Apple(Color color): Fruit("apple", color) {}

std::string Apple::getTaste() const {return "sweet";}


} // namespace homework

