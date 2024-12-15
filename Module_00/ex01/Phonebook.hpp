#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook{
	private:
		Contact phone_book[8];
	public:
		void	add(int& index);
		void	show();
		int	filled_count();
};



#endif