#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->b = new Brain();
	std::cout << "Dog: constructor called" << std::endl;
}


Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->b = new Brain(*copy.b);
}


Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.getType();
		delete this->b;
		this->b = new Brain(*copy.b);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Dog::~Dog()
{
	delete this->b;
	std::cout << "Dog: destructor called" << std::endl;
}
