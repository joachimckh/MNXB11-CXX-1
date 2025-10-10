#pragma once
#include <string>

namespace homework {

//Implementing my type Color
enum class Color {
        red,
        green,
        yellow
    };


// Implementing class Fruit and the methods "getName" and "getColor", 
// and the virtual method "getTaste" 
class Fruit{
    public:
        Fruit() = default;
        Fruit(std::string name, Color color) : _name{name}, _color{color} {}

        std::string getName() const {return _name;}   //Method "getName"
        Color getColor() const {return _color;}       //Method "getColor"

        virtual std::string getTaste() const = 0;     //Virtual method "getTaste"

    private:
        std::string _name;
        Color _color;

};

// Implementing class Apple which inherits from Fruit
class Apple : public Fruit {
    public:
        Apple() = default;
        Apple(Color color) : Fruit("apple", color) {}

        std::string getTaste() const override;

};


} // namespace homework
