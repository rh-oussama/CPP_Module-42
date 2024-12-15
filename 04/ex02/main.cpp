#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	// Animal animal; //abstract class

	Dog dog;
	Cat cat;
	const Animal *animalDog = new Dog();
	const Animal *animalCat = new Cat();

	dog.makeSound();
	cat.makeSound();
	animalDog->makeSound();
	animalCat->makeSound();

	delete animalDog;
	delete animalCat;

	return 0;
}
