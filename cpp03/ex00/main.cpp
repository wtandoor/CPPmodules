#include "ClapTrap.h"
#include <iostream>

int main()
{
	ClapTrap one("Roma");
	ClapTrap two;
	ClapTrap three(one);

	one.attack("yaaaaa!!!");
	one.takeDamage(3);
	one.beRepaired(1);
	return (0);
}