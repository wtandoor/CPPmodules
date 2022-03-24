#include "Weapon.h"

void Weapon::setType(const std::string& type){
    if (type.empty())
        std::cout << "No weapon to give a man" << std::endl;
    else
        _weapon = type;
}

Weapon::Weapon(std::string weapon){
    setType(weapon);
}

Weapon::~Weapon(){

}

const std::string Weapon::getType(void){
    if (_weapon.empty())
        std::cout << "no weapon" << std::endl;
    return (_weapon);
}