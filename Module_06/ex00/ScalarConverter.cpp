#include "ScalarConverter.hpp"




ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void) other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void) other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{

}


void ScalarConverter::convert(const std::string &str)
{
    // Detect char
    if (validateChar(str))
    {
        displayChar(str[0]);
        return;
    }

    // Detect int
    long intValue;
    if (validateInt(str, intValue))
    {
        displayInt(static_cast<int>(intValue));
        return;
    }

    // Detect float
    float floatValue;
    if (validateFloat(str, floatValue))
    {
        displayFloat(floatValue);
        return;
    }

    // Detect double
    double doubleValue;
    if (validateDouble(str, doubleValue))
    {
        displayDouble(doubleValue);
        return;
    }
}