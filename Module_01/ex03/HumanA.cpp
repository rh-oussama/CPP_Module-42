#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wep) : name(name), wep(wep) {}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << wep.getType() << std::endl;
}
