#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <sstream>



class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string	phone_number;
		std::string dark_secret;
	public:
		void add_contact();
		void print_table();
		void print_info();
		bool is_empty();

};

std::string	add_info(const std::string &message);
void			print_padded_column(std::string& message);


#endif