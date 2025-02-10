#include <catch2/catch_test_macros.hpp> // For Catch2 v3.x; use <catch2/catch.hpp> for v2.x
#include "add.h"  // Include the header containing the add() function

TEST_CASE("add() returns the sum of two integers", "[add]") {
    SECTION("Adding positive numbers") {
        REQUIRE(add(2, 3) == 5);
        REQUIRE(add(10, 20) == 30);
    }

    SECTION("Adding negative numbers") {
        REQUIRE(add(-1, -2) == -3);
        REQUIRE(add(-10, -20) == -30);
    }

    SECTION("Adding mixed positive and negative numbers") {
        REQUIRE(add(-5, 5) == 0);
        REQUIRE(add(7, -3) == 4);
    }
}
