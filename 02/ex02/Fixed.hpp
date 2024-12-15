#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Fixed
{
	private:
		int number;
		static const int fr = 8;
	public:
		//// Constructor && des && cp assig ///////
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();

		//// operator overloading (<, >, >=, <=, ==, !=) ///////
		bool	operator<(const Fixed &rhs) const;
		bool	operator>(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;
		
		////////// operator overload (+, -, *, / ) ///////////////
		Fixed operator+(const Fixed &rhs) const;
		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;

		////////// operator overload (++, --, ++, --) /////////////// 
		Fixed operator++(int); // ob++
		Fixed operator--(int); // ob--
		Fixed& operator++(); // ++ob
		Fixed& operator--(); // --ob

		///// Member Funtion ///////////
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static	Fixed& min(Fixed &a, Fixed &b);
		static	Fixed& max(Fixed &a, Fixed &b);
		static 	Fixed const &min(const Fixed &a, const Fixed &b);
		static 	Fixed const &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &var, const Fixed &obj);

#endif