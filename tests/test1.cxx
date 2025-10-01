#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "as1.hpp"

TEST_CASE("1.1") {
  int x = 1;
  homework::AddOneRef(x);
  REQUIRE(x == 2);
}

TEST_CASE("1.2") {
  REQUIRE(homework::isOdd(3) == true);
  REQUIRE(homework::isOdd(4) == false);
  REQUIRE(homework::isOdd(-3) == true);
  REQUIRE(homework::isOdd(-4) == false);
}

TEST_CASE("1.3") {
  REQUIRE(homework::floatToInt(3.14f) == 3);
  REQUIRE(homework::floatToInt(-3.14f) == -3);
}
TEST_CASE("1.4") {
  REQUIRE(homework::factorial(0) == 1);
  REQUIRE(homework::factorial(1) == 1);
  REQUIRE(homework::factorial(5) == 120);
  REQUIRE(homework::factorial(-1) == -1);
}
