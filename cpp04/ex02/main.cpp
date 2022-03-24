#include "Cat.h"
#include "Dog.h"
#include "Brain.h"

int main()
{
	std::cout <<"---------Create one Dog---------" << std::endl;
	const Animal* j = new Dog();
	std::cout << "---------Create one Cat---------" << std::endl;
	const Animal* i = new Cat();
	std::cout << "---------Create copy Cat---------" << std::endl;
	const Animal* copy_i = new Cat(*(Cat*)i);

	std::cout << "---------Delete copy Cat!--------" << std::endl;
	delete copy_i;
	std::cout << "---------Delete Dog!------------" << std::endl;
	delete j; 
	std::cout << "---------Delete Cat!------------" << std::endl;
	delete i;
	return (0);
}