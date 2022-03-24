#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string _weapon;
    public:
        const std::string getType(void);
        void setType(const std::string& type);
    Weapon(std::string weapon);
    ~Weapon();
};

#endif
