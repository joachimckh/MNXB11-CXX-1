#pragma once

#include <string>

namespace homework
{

    enum class Color
    {
        red,
        green,
        yellow
    };

    class Fruit
    {
    public:
        Fruit() = default;
        Fruit(const std::string &name, Color color) : name_(name), color_(color) {}

        std::string getName() const { return name_; }
        Color getColor() const { return color_; }

        virtual std::string getTaste() const = 0;

    private:
        std::string name_;
        Color color_;
    };

    class Apple : public Fruit
    {
    public:
        Apple(Color color)
            : Fruit("apple", color) {}

        std::string getTaste() const override
        {
            return "sweet";
        }
    };

} // namespace homework
