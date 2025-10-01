#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "as3.hpp"

TEST_CASE("3.1a") {
  homework::Color c = homework::red;
  REQUIRE(c == homework::red);
  REQUIRE(c != 0); // Ensure that enum values are not implicitly convertible to int
}

// TEST_CASE("3.1b"){
//   homework::Fruit fruit = homework::Fruit("banana", homework::yellow);
//   REQUIRE(fruit.getName() == "banana");
//   REQUIRE(fruit.getColor() == homework::yellow);
// }

TEST_CASE("3.1c") {
  homework::Apple apple{homework::green};
  REQUIRE(apple.getColor() == homework::green);
  REQUIRE(apple.getName() == "apple");
  REQUIRE(apple.getTaste() == "sweet");
}
