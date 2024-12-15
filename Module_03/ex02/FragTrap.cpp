/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:30:29 by oussama           #+#    #+#             */
/*   Updated: 2024/09/13 19:19:01 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	std::cout << "FragTrap Default Constructor called!."<<std::endl;
	this->name = "FragTrap-BOT";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parameterized FragTrap Constructor called!."<<std::endl;
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called!."<< std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Copy assigment called!."<<std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->AttackDamage = copy.AttackDamage;
		this->EnergyPoint = copy.EnergyPoint;
		this->HitPoint = copy.HitPoint;
	}
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " is requesting high fives!" << std::endl;
}