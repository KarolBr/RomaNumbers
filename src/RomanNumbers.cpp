#include <iostream>
#include <vector>
#include <string>

std::string getRomanNumber(std::string decimalNumber)
{
    std::string romanNumber{};
    int sizeOfDecimalNumber = decimalNumber.size();

    //podzielić decimalNumber na składowe: units,tens, hundreds and thousands


    std::vector<std::string> units = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::vector<std::string> tens = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    std::vector<std::string> hundreds = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    std::string thousand = "M";

    std::string my_units{};
    std::string my_tens{};
    std::string my_handreds{};
    std::string my_thousends{};
    
    char singleNumbers[5];
    int units_, tens_, hundreds_,thousends_; 

    //int sizeOfString = number.size();

    for(int i=0;i<sizeOfDecimalNumber;i++){
        singleNumbers[i] = decimalNumber.at(i);
    }

 /*
    //thousends
    int thousends_ = singleNumbers[0] - '0';
    
    for(int i=0;i<thousends_;i++)
        my_thousends += "M";

    //hundreds
    int hundreds_ = singleNumbers[1] - '0';
    my_handreds = hundreds[hundreds_-1];

    //tens
    int tens_ = singleNumbers[2] - '0';
    my_tens = tens[tens_-1];

    //units
    int units_ = singleNumbers[3] - '0';
    my_units = units[units_-1];

    romanNumber = my_thousends+my_handreds+my_tens+my_units;
*/

    switch (sizeOfDecimalNumber)
    {
    case 1:
     //units
    units_ = singleNumbers[0] - '0';
    my_units = units[units_-1];

    romanNumber = my_thousends+my_handreds+my_tens+my_units;


        break;
    case 2:
     //tens
    tens_ = singleNumbers[0] - '0';
    my_tens = tens[tens_-1];
    if(singleNumbers[1] != '0'){
    //units
    units_ = singleNumbers[1] - '0';
    my_units = units[units_-1];
    }
    romanNumber = my_thousends+my_handreds+my_tens+my_units;

   
        break;
    case 3:
     //hundreds
    hundreds_ = singleNumbers[0] - '0';
    my_handreds = hundreds[hundreds_-1];
    if(singleNumbers[1] != '0'){
    //tens
    tens_ = singleNumbers[1] - '0';
    my_tens = tens[tens_-1];
    }
    if(singleNumbers[2] != '0'){
    //units
    units_ = singleNumbers[2] - '0';
    my_units = units[units_-1];
    }
    romanNumber = my_thousends+my_handreds+my_tens+my_units;

   
        break;
    case 4:
            //thousends
    thousends_ = singleNumbers[0] - '0';
    
    for(int i=0;i<thousends_;i++)
        my_thousends += "M";
    if(singleNumbers[1] != '0'){
    //hundreds
    hundreds_ = singleNumbers[1] - '0';
    my_handreds = hundreds[hundreds_-1];
    }
    if(singleNumbers[2] != '0'){
    //tens
    tens_ = singleNumbers[2] - '0';
    my_tens = tens[tens_-1];
    }
    if(singleNumbers[3] != '0'){
    //units
    units_ = singleNumbers[3] - '0';
    my_units = units[units_-1];
    }
    romanNumber = my_thousends+my_handreds+my_tens+my_units;


        break;
    default:
        return "outOfRange";
        break;
    }
  

   return romanNumber;
}
