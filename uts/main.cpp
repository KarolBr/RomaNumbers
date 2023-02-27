#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

//#include <cstdint>
#include "RomanNumbers.h"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( getRomanNumber("23") == "XXIII" );
    REQUIRE( getRomanNumber("20") == "XX" );
    REQUIRE( getRomanNumber("10") == "X" );
    REQUIRE( getRomanNumber("5") == "V" );
}