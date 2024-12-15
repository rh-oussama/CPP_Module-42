#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat: constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" << std::endl;
}
