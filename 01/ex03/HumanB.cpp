#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), wep(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (wep)
		std::cout << name << " attacks with their " << wep->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	wep = &weapon;
}
