#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Clappy");
   clap.attack("target");
   clap.takeDamage(5);
   clap.beRepaired(3);
	return (0);
}
