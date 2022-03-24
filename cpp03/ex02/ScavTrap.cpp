#include "ScavTrap.h"
#include "ClapTrap.h"

void ScavTrap::attack(std::string const & target){
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->damage <<
	" points of damage!!!" <<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode." << std::endl;
}

std::ostream& operator<< (std::ostream &out, const ScavTrap &st)
{
	out << st.getName() << " " << st.getHitPoints() << " " << st.getEnergyPoints() << " " << st.getDamage();
	return (out);
}