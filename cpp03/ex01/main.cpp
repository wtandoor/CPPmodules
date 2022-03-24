#include "ScavTrap.h"

int main()
{
	ScavTrap one("ZOmb");
	std::cout << std::endl;

	ScavTrap two(one);
	std::cout << two <<std::endl;
	std::cout << std::endl;

	ScavTrap three("KEk");
	std::cout << std::endl;

	three.attack("Lol");
	two.takeDamage(5);
	one.attack("yaaaaaa!!");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}