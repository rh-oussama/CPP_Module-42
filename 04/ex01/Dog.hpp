#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *b;
	public:
		Dog(void);
		Dog(Dog const &copy);
		virtual ~Dog(void);
		Dog	&operator=(Dog const &copy);
		void	makeSound(void) const;
};

#endif