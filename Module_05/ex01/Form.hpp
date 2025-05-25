#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;
class Form
{
    private:    
        const std::string   _name;
        bool                _signed;
        const int           _signGrade;
        const int           _executeGrade;

    public:
        Form();
        Form(const std::string& name, int signGrade, int executeGrade);
        Form(const Form& other);
        Form&   operator=(const Form& other);
        ~Form();

        const   std::string& getName() const;
        bool    isSigned() const;
        int     getSignGrade() const;
        int     getExecuteGrade() const;
        
        void    beSigned(const Bureaucrat& bureaucrat);


        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();  
        };
};

std::ostream& operator<<(std::ostream& os, const Form& form);


#endif