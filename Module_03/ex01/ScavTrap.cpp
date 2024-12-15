/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:03:16 by oussama           #+#    #+#             */
/*   Updated: 2024/09/13 18:21:46 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	std::cout << "ScavTrap  Default Constructor called!."<<std::endl;
	this->name = "ScavTrap-BOT";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Parameterized Constructor has called!."<<std::endl;
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called!."<<std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy assigment called!."<<std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->AttackDamage = copy.AttackDamage;
		this->EnergyPoint = copy.EnergyPoint;
		this->HitPoint = copy.HitPoint;
	}
	return(*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap  Destructor called!." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}