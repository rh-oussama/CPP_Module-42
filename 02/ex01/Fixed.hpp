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
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream &operator<<(std::ostream &var, const Fixed &obj);

#endif