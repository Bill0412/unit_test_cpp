#include <catch2/catch_test_macros.hpp> // For Catch2 v3.x; use <catch2/catch.hpp> for v2.x
#include "left_pad.h"  // Include the header containing the left_pad() function

TEST_CASE("left_pad() pads string to a minimum length", "[left_pad]") {
    SECTION("Not padded when min len is less than input string len") {
        REQUIRE(left_pad("", 0) == "");
        REQUIRE(left_pad("abc", 0) == "abc");
    }

    SECTION("Padded when min len equal to input string len") {
        REQUIRE(left_pad("abc", 3) == "abc");
    }

    SECTION("Padded when min len greater than input string len") {
        REQUIRE(left_pad("abc", 4) == " abc");
    }

    SECTION("Custom pad char can be used") {
        REQUIRE(left_pad("abc", 5, '*') == "**abc");
    }
}