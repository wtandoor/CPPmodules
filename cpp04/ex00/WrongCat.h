#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat:public WrongAnimal{
    public:
        WrongCat():WrongAnimal("Cat") {
            std::cout << "WrongCat default constructor called" << std::endl;
        };

        ~WrongCat(){
            std::cout << "WrongCat destructor called" << std::endl;
        };

        WrongCat(const WrongCat & copy){
            (*this) = copy;
            std::cout << "WrongCat copy constructor called" << std::endl;
        };

        std::string getType() const{
            return (this->type);
        };

        void makeSound()const {
            std::cout << "Meoooow..." << std::endl;
        };
};

#endif