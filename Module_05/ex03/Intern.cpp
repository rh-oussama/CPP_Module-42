#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

const std::string from[] = {
        "presidential pardon",
		"robotomy request",
		"shrubbery creation" };

Intern::Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
	{

	}
    return *this;
}

Intern::Intern(const Intern &other)
{
	(void) other;
}

Intern::~Intern()
{
}


AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
    int index = -1;

    for (int i = 0; i < 3; i++)
        index = (from[i] == nameForm) ? i : index;
    switch (index)
    {
        case 0:
            std::cout << "Intern creates " << nameForm << std::endl;
            return new PresidentialPardonForm(targetForm);
        case 1:
            std::cout << "Intern creates " << nameForm << std::endl;
            return new RobotomyRequestForm(targetForm);
        case 2:
            std::cout << "Intern creates " << nameForm << std::endl;
            return new ShrubberyCreationForm(targetForm);
        default:
            std::cerr << "Error: Form name \"" << nameForm << "\" does not exist." << std::endl;
            throw std::invalid_argument("Form name not recognized");
    }
}
