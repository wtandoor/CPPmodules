#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ScavTrap one("Zomb");
	std::cout << std::endl;
	FragTrap two("Zomb2");
	std::cout << std::endl;

	two.highFivesGuys();
	two.attack("Kek");
	two.takeDamage(5);
	one.attack("yaaaaa!");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}