#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

class AForm;

class Intern
{
	public:
		Intern();
	    Intern &operator=(const Intern &other);
	    Intern(const Intern &other);
	    ~Intern();
        AForm *makeForm(std::string nameForm, std::string targetForm);
};

std::ostream &operator<<(std::ostream &lhs, const Intern &rhs);


#endif