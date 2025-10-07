#include "as3.hpp"

namespace homework {

std::string Fruit::getName() const{
    return name_;
}

Color Fruit::getColor() const{
    return color_;
}

virtual std::string Fruit::getTaste() const{

}


} // namespace homework

