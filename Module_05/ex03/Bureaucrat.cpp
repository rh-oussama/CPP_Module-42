#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(1)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    return *this;
}


Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
        
    _grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat::~Bureaucrat()
{

}

const std::string &Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void  Bureaucrat::incrementGrade()
{
    _grade--;
    if (_grade < 1)
         throw GradeTooHighException();


}

void Bureaucrat::decrementGrade()
{
    _grade++;
    if (_grade > 150)
         throw GradeTooLowException();

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs)
{
    lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return lhs;
}


void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << _name << " couldn't execute " << form.getName() 
                            << " because: " << e.what() << std::endl;
    }
}
