#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal: constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Unknown WrongAnimal sound!." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

