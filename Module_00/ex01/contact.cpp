/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:41:31 by oussama           #+#    #+#             */
/*   Updated: 2024/08/25 10:37:35 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void print_padded_column(std::string &message)
{
	int i;
	int size;

	std::cout << "|";
	if (message.length() > 10)
		std::cout << message.substr(0, 9) << ".";
	else
	{
		size = 10 - message.length();
		i = 0;
		while(i < size)
		{
			std::cout << " ";
			i++;
		}
      std::cout << message;
	}
}

std::string add_info(const std::string &message)
{
	std::string result;
	while (true)
	{
		std::cout << message;
		if (!std::getline(std::cin, result))
				exit(-1);
		if (!result.empty())
			break;
		std::cout << "\033[31mError: Enter A Valid Input.\033[0m" << std::endl;
	}
	return result;
}

bool Contact::is_empty()
{
	if (first_name.empty())
		return (true);
	return (false);
}

void Contact::print_table()
{
	print_padded_column(first_name);
	print_padded_column(last_name);
	print_padded_column(nick_name);
	std::cout << "|\n";

}

void Contact::add_contact()
{
	first_name = add_info("Enter first name: ");
	last_name = add_info("Enter last name: ");
	nick_name = add_info("Enter nick name: ");
	phone_number = add_info("Enter phone number: ");
	dark_secret = add_info("Enter darkest secret: ");
	std::cout << first_name 
				 << " successfully added to phonebook " << std::endl;
}

void Contact::print_info()
{
	std::cout << "\n---------------------------------\n";
	std::cout << "Requesting contact information...\n";
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nick_name << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << dark_secret << std::endl;
	std::cout << "---------------------------------\n\n";

}
