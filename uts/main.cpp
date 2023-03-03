#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

//#include <cstdint>
#include "RomanNumbers.h"

TEST_CASE( "[units]", "Roman Numbers" ) {
    REQUIRE( getRomanNumber("5") == "V" );
}

TEST_CASE( "[tens]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("23") == "XXIII" );
}

TEST_CASE( "[hundreds]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("123") == "CXXIII" );
}

TEST_CASE( "[one thousands]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("1234") == "MCCXXXIV" );
}

TEST_CASE( "[one thousands with zeros]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("1000") == "M" );
}

TEST_CASE( "[ten thousands and more]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("12223") == "outOfRange" );
}
