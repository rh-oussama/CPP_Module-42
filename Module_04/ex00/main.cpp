#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Test correct Animal, Cat, Dog classes
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();	//will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	// Test with WrongAnimal and WrongCat classes
	std::cout << "===========================" << std::endl;
	const WrongAnimal *metaWrong = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	metaWrong->makeSound();
	delete metaWrong;
	delete k;

	return 0;
}