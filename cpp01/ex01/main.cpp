#include "Zombie.h"

int main(void)
{
    std::string name = "We are Horde of ZOBIES::";
    int num = 10;
    Zombie *zombie_horde = zombieHorde(num, name);
    for (int i = 0; i < num; i++)
    {
        zombie_horde[i].announce();
    }
    delete[] zombie_horde;
    return (0);
}