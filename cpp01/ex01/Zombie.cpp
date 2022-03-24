#include "Zombie.h"

std::string Zombie::getZombieName(void){
    return(_ZombieName);
}

void Zombie::setZombieName(std::string _ZombieName){
    this->_ZombieName = _ZombieName;
}

Zombie::Zombie(std::string name){
    setZombieName(name);
}

Zombie::Zombie(){
    Zombie::setZombieName(std::string());
}

void Zombie::announce(void){
    std::cout  << getZombieName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << getZombieName() << " Zombie died(" << std::endl;
}