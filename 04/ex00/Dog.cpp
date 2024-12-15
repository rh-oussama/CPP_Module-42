#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog: constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
   std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->type = copy.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" << std::endl;
}
