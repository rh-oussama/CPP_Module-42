#ifndef FIXED_H
# define FIXED_H

#include <iostream>


class Fixed
{
	private:
		int number;
		static const int fr = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif