#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	showLeaks() {
	system("leaks -q animal");
}

int main() {

	std::cout << "--------------------------" << std::endl;
	const Animal *meta = new Animal();
	std::cout << "--------------------------" << std::endl;
	const Animal *dog = new Dog();
	std::cout << "--------------------------" << std::endl;
	const Animal *cat = new Cat();
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << BIRed << "Meta type:\t"<< BIYellow << meta->getType() << Color_off << std::endl;
	std::cout << BIRed << "Dog type:\t"<< BIYellow << dog->getType() << Color_off << std::endl;
	std::cout << BIRed << "Cat type:\t"<< BIYellow << cat->getType() << Color_off << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << BIGreen << "Cat says:\t" << Color_off;
	cat->makeSound();
	std::cout << "--------------------------" << std::endl;
	std::cout << BIGreen << "Dog says:\t" << Color_off;
	dog->makeSound();
	std::cout << "--------------------------" << std::endl;
	std::cout << BIGreen << "Meta says:\t" << Color_off;
	meta->makeSound();
	std::cout << "--------------------------" << std::endl;
	delete meta;
	std::cout << "--------------------------" << std::endl;
	delete dog;
	std::cout << "--------------------------" << std::endl;
	delete cat;
	std::cout << "--------------------------" << std::endl;
	const WrongAnimal *wrong_meta = new WrongAnimal();
	std::cout << "--------------------------" << std::endl;
	const WrongAnimal *wrong_cat = new WrongCat();
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << BIRed << "WrongMeta type:\t"<< BIYellow << wrong_meta->getType() << Color_off << std::endl;
	std::cout << BIRed << "WrongCat type:\t"<< BIYellow << wrong_cat->getType() << Color_off << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << BIGreen << "WrongCat says:\t" << Color_off;
	wrong_cat->makeSound();
	std::cout << "--------------------------" << std::endl;
	std::cout << BIGreen << "WrongMeta says:\t" << Color_off;
	wrong_meta->makeSound();
	std::cout << "--------------------------" << std::endl;
	delete wrong_meta;
	std::cout << "--------------------------" << std::endl;
	delete wrong_cat;
}