#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() :
    _name("defaultAForm"), 
    _signed(false),
    _signGrade(150),
    _executeGrade(150)
{
}

AForm::AForm(const std::string& name, int signGrade, int executeGrade) : 
    _name(name),
    _signed(false),
    _signGrade(signGrade),
    _executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : 
    _name(other._name),
    _signed(other._signed),
    _signGrade(other._signGrade),
    _executeGrade(other._executeGrade)
{
}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        _signed = other._signed;
    }
    return *this;
}

AForm::~AForm()
{
}

const std::string& AForm::getName() const
{
    return _name;
}
bool AForm::isSigned() const
{
    return _signed;
}
int AForm::getSignGrade() const
{
    return _signGrade;
}
int AForm::getExecuteGrade() const
{
    return _executeGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _signGrade)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << "AForm: " << AForm.getName() 
       << ", Sign Grade: " << AForm.getSignGrade() 
       << ", Execute Grade: " << AForm.getExecuteGrade() 
       << ", Signed: " << (AForm.isSigned() ? "Yes" : "No");
    return os;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (!_signed)
        throw std::runtime_error("Cannot execute: form is not signed");
    if (executor.getGrade() > _executeGrade)
        throw GradeTooLowException();    
    executeAction();
}