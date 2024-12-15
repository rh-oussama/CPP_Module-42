#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal: constructor called" << std::endl;
}


Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Unknown animal sound!." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: destructor called" << std::endl;
}

