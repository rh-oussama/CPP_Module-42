#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
	    Bureaucrat &operator=(const Bureaucrat &other);
	    Bureaucrat(const std::string &name, int grade);
	    Bureaucrat(const Bureaucrat &other);
	    ~Bureaucrat();

	    const std::string &getName() const;
	    int getGrade() const;
	    void incrementGrade();
	    void decrementGrade();

		void signForm(Form& form);

	    class GradeTooHighException: public std::exception
	    {
		    public:
                virtual const char *what() const throw ();
	    };

	    class GradeTooLowException: public std::exception
        {
		    public:
                virtual const char *what() const throw ();
	    };
	    private:
		    const std::string _name;
	        int _grade;
};

std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs);


#endif