#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	const Animal* j = new Dog();
   const Animal* i = new Cat();

   delete j;
   delete i;

	std::cout << "=============================\n";

   Dog defaultDog;
	Dog copiedDog(defaultDog);

   copiedDog = defaultDog;

   return 0;
}