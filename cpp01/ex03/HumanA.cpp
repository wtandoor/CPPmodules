#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon){
    this->_name = name;
}

HumanA::~HumanA(){

}

void HumanA::attack (void){
    std::cout << _name << " attack with weapon types " << _weapon.getType() << std::endl; 
}

std::string HumanA::getName(void){
    return this->_name;
}

Weapon HumanA::getWeapon(void){
    return this->_weapon;
}

void HumanA::setName(std::string name){
    if (!name.empty())
        this->_name = name;
}

void HumanA::setWeapon(Weapon &weapon){
    this->_weapon = weapon;
}
