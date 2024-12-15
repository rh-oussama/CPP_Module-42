/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:21:40 by oussama           #+#    #+#             */
/*   Updated: 2024/09/03 16:46:42 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

///////// Constructor && Destructor /////////

Fixed::Fixed()
{
	std::cout << "Default constructor has been called." << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor has been called." << std::endl;
	*this = copy;
}

Fixed::Fixed(const int number)
{
	this->number = number << fr;
	std::cout << "Int constructor has been called." << std::endl;
}

Fixed::Fixed(const float number)
{
	this->number = roundf(number * (1 << fr));
	std::cout << "Float constructor has been called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &fixed)
		this->number = fixed.getRawBits();
	return (*this);
}


///////// member function /////////

int Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::toInt() const
{
	return(number >> fr);
}

float Fixed::toFloat() const
{
	return ((float) number / (1 << fr));
}

/////// ostream overloading ///////

std::ostream &operator<<(std::ostream &var, const Fixed &obj)
{
	var << obj.toFloat();
	return (var);
}