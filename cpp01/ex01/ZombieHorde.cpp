#include "Zombie.h"

Zombie* zombieHorde(int n, std::string name){
    Zombie *horde = new Zombie[n];
    int i = 0;

    while (i < n){
        horde[i].setZombieName(name);
        i++;
    }
    return (horde);
}