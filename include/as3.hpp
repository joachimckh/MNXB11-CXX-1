#pragma once
#include <string>

namespace homework {

enum class Color { red, green, yellow };

class Fruit {
public:
  Fruit(const std::string& name, Color c);
  virtual ~Fruit();
  std::string getName() const;
  Color getColor() const;
  virtual std::string getTaste() const = 0;
protected:
  std::string name_;
  Color color_;
};

class Apple : public Fruit {
public:
  explicit Apple(Color c);
  std::string getTaste() const override;
};

} 



