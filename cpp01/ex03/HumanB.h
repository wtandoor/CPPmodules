# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.h"
#include "HumanB.h"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void            attack();
        void            setWeapon(Weapon &weapon_type);
        Weapon&         getWeapon(void);
        std::string&    getName(void);
        void            setName(std::string name);
} ;


#endif