#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("BOT"), HitPoint(10), EnergyPoint(10), AttackDamage(0) 
{
	std::cout << "ClapTrap Default Constructor called!."<<std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "Parameterized ClapTrap Constructor called!."<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy Constructor has called!."<<std::endl;
	(*this) = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy assigment has called!."<<std::endl;
   if (this != &copy)
	{
		this->name = copy.name;
		this->AttackDamage = copy.AttackDamage;
		this->EnergyPoint = copy.EnergyPoint;
		this->HitPoint = copy.HitPoint;
	}
   return *this;
}


ClapTrap::~ClapTrap()
{
   std::cout << "ClapTrap Destructor called!." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->HitPoint > 0 && this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << name << " cannot attack, not enough energy or hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint > 0)
	{
		this->HitPoint -= amount;
		if (this->HitPoint < 0)
			this->HitPoint = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! " << "Remaining hit points: " << this->HitPoint << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is already down!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
   if (this->HitPoint > 0 && this->EnergyPoint > 0)
   {
		this->HitPoint += amount;
    	this->EnergyPoint--;
    	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points! Remaining hit points: " << this->HitPoint << std::endl;
   }
   else
    	std::cout << "ClapTrap " << name << " cannot repair, not enough energy or hit points!" << std::endl;
}
