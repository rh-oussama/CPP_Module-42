#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->b = new Brain();
	std::cout << "Cat: constructor called" << std::endl;
}


Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->b = new Brain(*copy.b);
}


Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
		delete this->b;
		this->b = new Brain(*copy.b);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Cat::~Cat()
{
	delete this->b;
	std::cout << "Cat: destructor called" << std::endl;
}
