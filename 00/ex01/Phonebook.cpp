#include "Phonebook.hpp"

int PhoneBook::filled_count()
{
	int i = 0;

	while (i < 8 && !phone_book[i].is_empty())
		i++;
	return (i);
}


void PhoneBook::show()
{
	int i = 0;
	std::string select;
	int choice;
	
	if (phone_book[0].is_empty())
	{
		std::cout << "Phonebook is empty!\n";
		return ;
	}
	std::cout << " ___________________________________________\n";
   std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
   std::cout << "|----------|----------|----------|----------|\n";
	while (i < 8 && !phone_book[i].is_empty())
	{
		std::string i_str(1, (char)((i + 1) + '0'));
		print_padded_column(i_str);
		phone_book[i].print_table();
		std::cout << "|----------|----------|----------|----------|\n\n";
		i++;
	}


	while (true)
	{
		select = add_info("Select an index: ");
		if (select.length() == 1 && std::isdigit(select[0]))
		{
			choice = select[0] - '0';
			if (choice >= 0 && choice <= filled_count())
			{
				phone_book[choice - 1].print_info();
				break;
			}
      }
		std::cout << "\033[31mInvalid index or input. Please try again.\033[0m" << std::endl;
   }
}

void PhoneBook::add(int& index)
{
	phone_book[index].add_contact();
	index = (index + 1) % 8;
}

int main()
{
	PhoneBook phone;
	int index;
	
	index = 0;
	std::cout << "Welcome to Crappy!\n";
	while (1)
	{
		std::string command;
		command = add_info("Enter a command > ");
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phone.add(index);
		else if (command == "SEARCH")
			phone.show();
		else
			std::cout << "\033[31mError: Enter A Valid Command. [ADD | SEARCH | EXIT]\033[0m" << std::endl;
		 
	}
}