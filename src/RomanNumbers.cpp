#include <iostream>
#include <vector>

std::string getRomanNumber(std::string decimalNumber)
{
    std::string romanNumber{};
    auto sizeOfDecimalNumber = decimalNumber.size();

    //podzielić decimalNumber na składowe: units,tens, hundreds and thousands


    std::vector<std::string> units = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::vector<std::string> tens = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    std::vector<std::string> hundreds = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    std::string thousand = "M";

    switch (sizeOfDecimalNumber)
    {
    case 1:
        return romanNumber;
        break;
    case 2:
        return romanNumber;
        break;
    case 3:
        return romanNumber;
        break;
    case 4:
        return romanNumber;
        break;
    default:
        return "outOfRange";
        break;
    }
}
