/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:14:47 by oussama           #+#    #+#             */
/*   Updated: 2024/08/27 11:29:37 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>
#include <limits>
#include "Harl.hpp"

int main()
{
   Harl obj;
	std::string level;

	std::cout << "\033[1;36m========================================\033[0m\n";
	std::cout << "      Welcome to Harl's Complaints\n";
	std::cout << "\033[1;36m========================================\033[0m\n";
	std::cout << "Please choose a complaint level:\n";
	std::cout << "\033[1;34m1 => DEBUG\033[0m\n";
	std::cout << "\033[1;32m2 => INFO\033[0m\n";
	std::cout << "\033[1;33m3 => WARNING\033[0m\n";
	std::cout << "\033[1;31m4 => ERROR\033[0m\n";
	std::cout << "\033[1;36m----------------------------------------\033[0m\n";
	std::cout << "Enter your choice: ";

   if(!std::getline(std::cin, level))
      return 1;

   std::cout << "\033[1;35m\nHarl's complaint:\033[0m\n";
   obj.complain(level);

   return 0;
}