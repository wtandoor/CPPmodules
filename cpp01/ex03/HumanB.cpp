#include "HumanB.h"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(){

}

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;
}

Weapon& HumanB::getWeapon(void){
    return *_weapon;
}

std::string& HumanB::getName(void) {
    return this->_name;
}

void HumanB::setName(std::string name){
    if (name.empty())
        std::cout << " this Humna haven't name, this field canno't be empty " << std::endl;
    else
        this->_name = name;
}

void HumanB::attack(){
    if (_weapon == NULL)
        std::cout << getName() << " attacked without a weapon " << std::endl;
    else
        std::cout << getName() << " attacked usind weapon with type " << _weapon->getType() << std::endl;
}