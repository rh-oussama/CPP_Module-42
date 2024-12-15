#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& wep;
	public:
		HumanA(std::string name, Weapon& wep);
		~HumanA();
		void attack();
};

#endif
