#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    : AForm("Robotomy Request Form", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("Robotomy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), _target(other._target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "* DRILLING NOISES * Brrrr! Brrrr! Brrrr!" << std::endl;
    
    static bool seeded = false;
    if (!seeded) {
        srand(time(NULL));
        seeded = true;
    }
    if (rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy of " << _target << " failed!" << std::endl;
}
