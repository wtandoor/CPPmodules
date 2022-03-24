#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog:public Animal{
    public:
        Dog():Animal("Dog"){
            std::cout << "Dog default constructor called" << std::endl;
        };

        ~Dog(){
            std::cout << "Dog destructor called" << std::endl;
        };

        Dog(const Dog & other){
            (*this) = other;
            std::cout << "Dog copy constructor called" << std::endl;
        };

        Dog & operator= (const Dog & other){
            this->type = other.getType();
            return (*this);
        };

        void makeSound() const{
            std::cout << "Gav" << std::endl;
        };
};

#endif