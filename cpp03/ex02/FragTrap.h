#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public ClapTrap{
    public:
        FragTrap(): ClapTrap() {
            this->name = "Noname";
            this->hitPoints = 100;
            this->energyPoints = 100;
            this->damage = 30;
            std::cout << "FragTrap default constructor called" << std::endl;
        };

        ~FragTrap(){
            std::cout << "FragTrap Destructor called " << this->name << std::endl;
        };

        FragTrap(std::string name) : ClapTrap() {
            this->name = name;
            this->hitPoints = 100;
            this->energyPoints = 100;
            this->damage = 30;
            std::cout << "FragTrap constructor called " << this->name << std::endl;
        };

        FragTrap(FragTrap & other){
            std::cout << "FragTrap Copy constructor called" << std::endl;
            (*this) = other;
        };

        FragTrap & operator= (FragTrap & other){
            this->name = other.getName();
            this->hitPoints = other.getHitPoints();
            this->energyPoints = other.getEnergyPoints();
            this->damage = other.getDamage();
            return (*this);
        };

        void highFivesGuys(void);
};

#endif
