/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:21:40 by oussama           #+#    #+#             */
/*   Updated: 2024/09/03 16:48:32 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


////////// operator overload (<, >, >=, <=, ==, !=) ///////////////

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}


////////// operator overload (+, -, *, / ) ///////////////

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() / rhs.toFloat()));
}


////////// operator overload (+, -, *, / ) ///////////////

Fixed Fixed::operator++(int)
{
   Fixed temp = *this;
   this->number += 1;
   return temp;
}

Fixed Fixed::operator--(int)
{
   Fixed temp = *this;
   this->number -= 1;
   return temp;
}

Fixed &Fixed::operator++()
{
   this->number += 1;
   return *this;
}

Fixed &Fixed::operator--()
{
   this->number -= 1;
   return *this;
}


///////// Constructor && Destructor /////////

Fixed::Fixed()
{
	// std::cout << "Default constructor has been called." << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor has been called." << std::endl;
	*this = copy;
}

Fixed::Fixed(const int number)
{
	this->number = number << fr;
	// std::cout << "Int constructor has been called." << std::endl;
}

Fixed::Fixed(const float number)
{
	this->number = roundf(number * (1 << fr));
	// std::cout << "Float constructor has been called." << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor has been called." << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Copy assignment operator called." << std::endl;
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


Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}


/////// ostream overloading ///////

std::ostream &operator<<(std::ostream &o, const Fixed &t)
{
	o << t.toFloat();
	return (o);
}