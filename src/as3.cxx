#include "as3.hpp"

namespace homework {

    // get-method definitions
    const std::string &Fruit::getName() const
    {
        return name_;
    }
    
    Color Fruit::getColor() const
    {
        return col_;
    };

    // method definition on Apple, getTaste() overrides getTaste on Fruit, return "sweet"
    std::string Apple::getTaste() const
    {
        return "sweet";
    };

} // namespace homework
