#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(): ClapTrap() {
            this->name = "Noname";
            this->hitPoints = 100;
            this->energyPoints = 50;
            this->damage = 20;
            std::cout << "ScavTrap Default constructor called" << std::endl;
        };

        ~ScavTrap(){
            std::cout << "ScavTrap Destructor called " << this->name << std::endl;
        };

        ScavTrap(std::string name): ClapTrap(name){
            this->name = name;
            this->hitPoints = 100;
            this->energyPoints = 50;
            this->damage = 20;
            std::cout << "ScavTrap Constructor called " << name << std::endl;
        };

        ScavTrap(ScavTrap & copy){
            std::cout << "ScavTrap Copy constructor called" << std::endl;
	        (*this) = copy;
        };

        ScavTrap & operator= (ScavTrap & other){
            this->name = other.getName();
	        this->hitPoints = other.getHitPoints();
	        this->energyPoints = other.getEnergyPoints();
	        this->damage = other.getDamage();
	        return (*this);
        };

        void guardGate();
        void attack(std::string const & target);
};

std::ostream& operator << (std::ostream &out, const ScavTrap &st);

#endif