#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try {
        Intern RandomIntern;

        AForm* shrubberyForm = RandomIntern.makeForm("shrubbery creation", "Garden");
        AForm* robotomyForm = RandomIntern.makeForm("robotomy request", "Bender");
        AForm* pardonForm = RandomIntern.makeForm("presidential pardon", "Alice");

        Bureaucrat john("John", 2);

        if (shrubberyForm) {
            john.signForm(*shrubberyForm);
            john.executeForm(*shrubberyForm);
            delete shrubberyForm;
        }

        if (robotomyForm) {
            john.signForm(*robotomyForm);
            john.executeForm(*robotomyForm);
            delete robotomyForm;
        }

        if (pardonForm) {
            john.signForm(*pardonForm);
            john.executeForm(*pardonForm);
            delete pardonForm;
        }

        AForm* invalidForm = RandomIntern.makeForm("invalid form", "Nowhere");
        if (invalidForm) {
            john.signForm(*invalidForm);
            john.executeForm(*invalidForm);
            delete pardonForm;
        }
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}