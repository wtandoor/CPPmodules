#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int damage;
    public:
        ClapTrap(){
            this->name = "Noname";
            this->hitPoints = 10;
            this->energyPoints = 10;
            this->damage = 0;
            std::cout << "Default constructor called" << std::endl;
        };

        ~ClapTrap(){
            std::cout << "Destructor called" << std::endl;
        };

        ClapTrap(std::string name){
            this->name = name;
            this->hitPoints = 10;
            this->energyPoints = 10;
            this->damage = 0;
            std::cout << "Constructor called" << std::endl;
        };

        ClapTrap(const ClapTrap & obj){
            (*this) = obj;
            std::cout << "Copy constructor called" << std::endl;

        };

        ClapTrap & operator= (const ClapTrap & other){
            this->name = other.getName();
	        this->hitPoints = other.getHitPoints();
	        this->energyPoints = other.getEnergyPoints();
	        this->damage = other.getDamage();
            return (*this);
        };

        void setName(std::string name){
            this->name = name;
        };

        void setHitPoints(int hitPoints){
            this->hitPoints = hitPoints;
        };

        void setEnergyPoints(int energyPoints){
            this->energyPoints = energyPoints;
        };

        void setDamage(int damage){
            this->damage = damage;
        };

        std::string getName() const {
            return this->name;
        };

        int getHitPoints() const {
            return this->hitPoints;
        }

        int getEnergyPoints() const{
            return this->energyPoints;
        }

        int getDamage() const {
            return this->damage;
        }

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif