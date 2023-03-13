#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

//#include <cstdint>
#include "RomanNumbers.h"

TEST_CASE( "[units]", "Roman Numbers" ) {
    REQUIRE( getRomanNumber("5") == "V" );
}

TEST_CASE( "[tens]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("24") == "XXIV" );
}

TEST_CASE( "[tens with zero]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("20") == "XX" );
}

TEST_CASE( "[hundreds]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("104") == "CIV" );
}

TEST_CASE( "[one thousands]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("1004") == "MIV" );
}

TEST_CASE( "[what if i put some letters]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("some-letters") == "outOfRange" );
}

TEST_CASE( "[what if i put exactly four letters]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("some") == "outOfRange" );
}

TEST_CASE( "[one thousands with zeros]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("1000") == "M" );
}

TEST_CASE( "[zero at the begining hundred]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("0100") == "C" );
}

TEST_CASE( "[zero at the begining tens]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("0010") == "X" );
}

TEST_CASE( "[zero at the begining unit]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("0001") == "I" );
}

TEST_CASE( "[ten thousands and more]","Roman Numbers" ) {
    REQUIRE( getRomanNumber("12223") == "outOfRange" );
}
