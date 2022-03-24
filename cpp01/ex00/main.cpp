#include "Zombie.h"

int main(void)
{
    std::string name1 = "roma";
    std::string name2 = "vasya";
    std::string name3 = "volodya";

    Zombie zombieRoma(name1);
    zombieRoma.announce();

    std::cout << std::endl;

    Zombie *zombieVasya = newZombie(name2);
    zombieVasya->announce();
    delete zombieVasya;

    std::cout << std::endl;

    randomChump(name3);

    std::cout << std::endl;

    return (0);
}
