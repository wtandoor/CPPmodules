#include "ClapTrap.h"

void ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->damage <<
		" points of damage!" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->name
	<< " take " << amount << " point of damage!"
	<< std::endl;

	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << this->name
	<< " repaired by " << amount << " health points."
	<< std::endl;
	this->hitPoints += amount;
}