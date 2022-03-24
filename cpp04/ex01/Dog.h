#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog:public Animal{
    private:
        Brain *dogBrains;
    public:
        Dog():Animal("Dog"){
            std::cout << "Dog default constructor called" << std::endl;
            dogBrains = new Brain();
        };

        ~Dog(){
            std::cout << "Dog destructor called" << std::endl;
            delete dogBrains;
        };

        Dog(const Dog & copy){
            dogBrains = new Brain();
            (*this) = copy;
            std::cout << "Dog copy constructor called" << std::endl;
        };

        Dog & operator= (const Dog & other){
            if (this->dogBrains)
                delete dogBrains;
            this->type = other.getType();
            this->dogBrains = new Brain(*other.dogBrains);
            return *this;
        };

        void makeSound() const{
            std::cout << "gav" << std::endl;
        };
};

#endif