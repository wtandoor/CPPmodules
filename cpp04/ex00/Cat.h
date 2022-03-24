#ifndef CAT_H
#define CAT_H

#include "Animal.h"


class Cat: public Animal{
    public:
        Cat():Animal("Cat"){
            std::cout << "Cat default constructor called" << std::endl;
        };

        ~Cat(){
            std::cout << "Cat destructor called" << std::endl;
        };

        Cat(const Cat & copy){
            (*this) = copy;
            std::cout << "Cat copy constructor called" << std::endl;
        };

        Cat & operator= (const Cat & other){
            this->type = other.getType();
            return (*this);
        };

        void makeSound()const{
            std::cout << "Meow" << std::endl;
        };
};


#endif