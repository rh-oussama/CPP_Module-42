#include "Harl.hpp"


Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

unsigned long djb2(const std::string& str)
{
	unsigned long hash = 5381;
	size_t i = 0;
	while (i < str.length())
		hash = hash * 33 + str[i++];
   return hash;
}

// DEBUG 210670746764
// INFO 6384151633
// WARNING 229444843303835
// ERROR 210672417103

void Harl::complain(std::string level)
{
	unsigned long hash = djb2(level);
	switch (hash)
	{
		case 210670746764: // DEBUG
			(this->* &Harl::debug)();
			break;
		case 6384151633: // INFO
			(this->* &Harl::info)();
			break;
		case 229444843303835:	// WARNING
			(this->* &Harl::warning)();
			break;
		case 210672417103:	// ERROR
			(this->* &Harl::error)();
			break;
		default:
			std::cout << "\033[1;31m✖ Enter a Valid Input: [DEBUG, INFO, WARNING, ERROR]\033[0m" << std::endl;
			break;
	}
}