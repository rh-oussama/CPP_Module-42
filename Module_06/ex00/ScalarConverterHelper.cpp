#include <limits>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <cctype>

bool validateChar(const std::string &str)
{
    return str.length() == 1;
}

bool validateInt(const std::string &str, long &intValue)
{
    char *endPtr;
    errno = 0;
    intValue = std::strtol(str.c_str(), &endPtr, 10);
    return *endPtr == '\0' && errno != ERANGE && intValue >= std::numeric_limits<int>::min() && intValue <= std::numeric_limits<int>::max();
}

bool validateFloat(const std::string &str, float &floatValue)
{
    char *endPtr;
    errno = 0;
    floatValue = std::strtof(str.c_str(), &endPtr);
    return ((*endPtr == 'f' || *endPtr == 'F') && *(endPtr + 1) == '\0' && errno != ERANGE);
}

bool validateDouble(const std::string &str, double &doubleValue)
{
    char *endPtr;
    errno = 0;
    doubleValue = std::strtod(str.c_str(), &endPtr);
    return *endPtr == '\0' && errno != ERANGE;
}


void displayChar(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void displayInt(int n)
{
    if (n >= 0 && n <= 127 && isprint(static_cast<int>(n)))
        std::cout << "char: '" << static_cast<char>(static_cast<int>(n)) << "'" << std::endl;
    else if (n >= 0 && n <= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    
    
    std::cout << "int: " << n << std::endl;
    std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;

}

void displayFloat(float n)
{
    // =================================================
    if (n >= 0 && n <= 127 && isprint(static_cast<int>(n)))
        std::cout << "char: '" << static_cast<char>(static_cast<int>(n)) << "'" << std::endl;
    else if (n >= 0 && n <= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;

    // =================================================
    if (n >= std::numeric_limits<int>::min() && n <= std::numeric_limits<int>::max())
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    
    std::cout << "float: " << n << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;

}

void displayDouble(double n)
{
    // =================================================
    if (n >= 0 && n <= 127 && isprint(static_cast<int>(n)))
        std::cout << "char: '" << static_cast<char>(static_cast<int>(n)) << "'" << std::endl;
    else if (n >= 0 && n <= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;

    // =================================================
    if (n >= std::numeric_limits<int>::min() && n <= std::numeric_limits<int>::max())
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;


    
    // =================================================
    if (n < std::numeric_limits<float>::min() || n > std::numeric_limits<float>::max())
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
    
    // ====================================================
    std::cout << "double: " << n << std::endl;

}
