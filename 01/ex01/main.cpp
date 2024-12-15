#include "Zombie.hpp"

int main()
{
	Zombie	*ptr;

	ptr = zombieHorde(10, "OL");
	
	for (int i = 0; i < 10; i++)
	{
		if (ptr)
		{
			std::cout << i <<": ";
			ptr[i].announce();
		}
	}
	delete[] ptr;
}