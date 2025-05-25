#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat low("Low", 150);
        std::cout << low << std::endl;
        low.incrementGrade();
        std::cout << low << std::endl;
        low.decrementGrade();
        std::cout << low << std::endl;                
        Bureaucrat tooHigh("TooHigh", 0);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "======================\n";
        Bureaucrat highGrade("HighGrade", 1);
        std::cout << highGrade << std::endl;
        highGrade.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    try
    {
        std::cout << "======================\n";
        Bureaucrat lowGrade("LowGrade", 150);
        std::cout << lowGrade << std::endl;
        lowGrade.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}