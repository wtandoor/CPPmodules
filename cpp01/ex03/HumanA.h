#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"
#include "HumanB.h"

class HumanA {
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
        std::string getName(void);
        Weapon getWeapon(void);
        void setName(std::string name);
        void setWeapon(Weapon &weapon);

};

#endif