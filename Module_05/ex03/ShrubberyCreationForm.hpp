#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);  
        ShrubberyCreationForm(const ShrubberyCreationForm& other);  
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);   
        virtual ~ShrubberyCreationForm(); 
        virtual void executeAction() const;
};

#endif