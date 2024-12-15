#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat: constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
}
