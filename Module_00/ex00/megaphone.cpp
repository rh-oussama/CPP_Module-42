/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 00:06:04 by oussama           #+#    #+#             */
/*   Updated: 2024/08/11 00:26:27 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (*(++argv))
		{
			while (**argv)
				std::cout << (char)std::toupper(*((*argv)++));
		}
	}
	std::cout << std::endl;
	return 0;
}
