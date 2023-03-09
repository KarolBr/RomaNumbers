#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> roman_units = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
std::vector<std::string> roman_tens = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
std::vector<std::string> roman_hundreds = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
std::string roman_thousand = "M";


std::string getRomanUnits(int index)
{
    std::string result{};
    if(index){
        result = roman_units[index - 1];
    }
    return result;
}

std::string getRomanTens(int index){
    std::string result{};
    if(index){
        result = roman_tens[index - 1];
    }
    return result;
}

std::string getRomanHundreds(int index){
    std::string result{};
    if(index){
        result = roman_hundreds[index - 1];
    }
    return result;
}


std::string getRomanNumber(std::string decimalNumber)
{
    std::string romanNumber{};
    int sizeOfDecimalNumber = decimalNumber.size();

    char singleNumbers[5];
    int thousends_;

    // int sizeOfString = number.size();

    for (int i = 0; i < sizeOfDecimalNumber; i++)
    {
        singleNumbers[i] = decimalNumber.at(i);
    }

    switch (sizeOfDecimalNumber)
    {
    case 1:
        // units
        romanNumber = getRomanUnits(singleNumbers[0] - '0');
        break;
    case 2:
        //tens
        romanNumber = getRomanTens(singleNumbers[0] - '0');
        romanNumber += getRomanUnits(singleNumbers[1] - '0');
        break;
    case 3:
        // hundreds
        romanNumber = getRomanHundreds(singleNumbers[0] - '0');
        romanNumber += getRomanTens(singleNumbers[1] - '0');
        romanNumber += getRomanUnits(singleNumbers[2] - '0');
        break;
    case 4:
        // thousends
        thousends_ = singleNumbers[0] - '0';

        for (int i = 0; i < thousends_; i++)
            romanNumber += "M";
        
        romanNumber += getRomanHundreds(singleNumbers[1] - '0');
        romanNumber += getRomanTens(singleNumbers[2] - '0');
        romanNumber += getRomanUnits(singleNumbers[3] - '0');
        break;
    default:
        return "outOfRange";
        break;
    }

    return romanNumber;
}
