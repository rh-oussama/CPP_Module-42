#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const &copy);
		Brain	&operator=(Brain const &copy);		
		~Brain(void);
};

#endif