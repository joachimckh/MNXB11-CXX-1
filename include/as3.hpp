#pragma once
#include <string>

namespace homework {

// 3.1a - Enum class Color
enum class Color { red, green, yellow };

// 3.1b - Base class Fruit
class Fruit {
public:
    Fruit(const std::string &name, Color color)
        : name_(name), color_(color) {}

    std::string getName() const { return name_; }
    Color getColor() const { return color_; }

    virtual std::string getTaste() const = 0; // pure virtual

    virtual ~Fruit() = default;

private:
    std::string name_;
    Color color_;
};

// 3.1c - Derived class Apple
class Apple : public Fruit {
public:
    Apple(Color color) : Fruit("apple", color) {}

    std::string getTaste() const override {
        return "sweet";
    }
};

} // namespace homework
