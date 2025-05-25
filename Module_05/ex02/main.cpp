#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat worker("Worker", 145);

        std::cout << boss << std::endl;
        std::cout << worker << std::endl;
        
		std::cout << "\n==========================\n";
        
		PresidentialPardonForm pardon("G1");
        std::cout << pardon << std::endl;
        worker.signForm(pardon);
        boss.signForm(pardon);
        worker.executeForm(pardon); 
        boss.executeForm(pardon);
        
		std::cout << "\n==========================\n";
        
		RobotomyRequestForm robotomy("G2");
        std::cout << robotomy << std::endl;
        worker.signForm(robotomy);
        boss.signForm(robotomy);
        worker.executeForm(robotomy);
        boss.executeForm(robotomy);
        
		std::cout << "\n==========================\n";
        
		ShrubberyCreationForm garden("G3");
        std::cout << garden << std::endl;
        worker.signForm(garden);
        worker.executeForm(garden);
        boss.executeForm(garden);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}