#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat:public Animal{
    private:
        Brain *catBrains;
    public:
        Cat():Animal("Cat"){
            std::cout << "Cat default constructor called" << std::endl;
            catBrains = new Brain();
        };

        ~Cat(){
            std::cout << "Cat destructor called " << std::endl;
            delete catBrains;
        };

        Cat(const Cat & copy):Animal(copy){
            catBrains = new Brain();
            (*this) = copy;
            std::cout << "Cat copy constructor called" << std::endl;
        };

        Cat & operator= (const Cat & other){
            if (this->catBrains)
                delete catBrains;
            this->type = other.getType();
            this->catBrains = new Brain(*other.catBrains);
            return (*this);
        };

        void makeSound()const{
            std::cout << "Meooow.." << std::endl;
        };
};

#endif