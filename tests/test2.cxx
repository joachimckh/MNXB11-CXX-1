#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "as2.hpp"


TEST_CASE("2.1") {
  homework::Foo foo{};
  REQUIRE(foo.bar() == 42);
  REQUIRE(foo.baz() == Approx(3.14f));
  REQUIRE(foo.x == Approx(2.71f));
  REQUIRE(foo.quux() == std::vector<double>{1.0, 2.0, 3.0});
}

TEST_CASE("2.2") {
  // No longer a template class
  // homework::Vector2D<int> v{1, 2};
  // homework::Vector2D<int> w{3, 4};
  // REQUIRE((v + w) == homework::Vector2D<int>{4, 6});

  homework::fVector2D v2{1.0f, 2.5f};
  homework::fVector2D w2{3.2f, 4.8f};
  REQUIRE((v2 + w2) == homework::fVector2D{4.2f, 7.3f});
}
