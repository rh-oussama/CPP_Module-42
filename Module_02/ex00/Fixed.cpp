#include "Fixed.hpp"

Fixed::Fixed(): number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : number(copy.number)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->number = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void Fixed::setRawBits(int	const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}