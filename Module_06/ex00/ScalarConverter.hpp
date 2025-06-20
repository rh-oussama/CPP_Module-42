#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include "iostream"

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
        static void convert(const std::string &str);
};


bool validatePseudo(const std::string &str);
bool validateChar(const std::string &str);
bool validateInt(const std::string &str, long &intValue);
bool validateFloat(const std::string &str, float &floatValue);
bool validateDouble(const std::string &str, double &doubleValue);
void displayChar(char c);
void displayInt(int n);
void displayFloat(float n);
void displayDouble(double n);
void displayPseudo(const std::string &str);


#endif