#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
   FragTrap frag("Fraggy");

   frag.attack("target");
   frag.takeDamage(30);
   frag.beRepaired(15);
   frag.highFivesGuys();
}
