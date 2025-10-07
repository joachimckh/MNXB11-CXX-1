#pragma once
#include <string>

namespace homework {

// (a) enum class for colors
enum class Color {
    red,
    green,
    yellow
};

// (b) Fruit base class
class Fruit {
public:
    Fruit(const std::string& name, Color color)
        : name_(name), color_(color) {}

    std::string getName() const { return name_; }
    Color getColor() const { return color_; }

    virtual std::string getTaste() const = 0; // pure virtual

private:
    std::string name_;
    Color color_;
};

// (c) Apple class
class Apple : public Fruit {
public:
    explicit Apple(Color color)
        : Fruit("apple", color) {}

    std::string getTaste() const override {
        return "sweet";
    }
};

} // namespace homework
