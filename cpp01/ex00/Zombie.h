#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
    private:
    std::string _ZombieName;

    public:
    void announce(void);
    std::string getZombieName(void);
    void setZombieName(std::string _ZombieName);

    ~Zombie(void);
    Zombie(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif