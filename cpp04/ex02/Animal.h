#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal(){
            this->type = "";
            std::cout << "Animal default constructor called" << std::endl;
        };

        virtual ~Animal(){
            std::cout << "Animal destructor called" << std::endl;
        };

        Animal(std::string type){
            this->type = type;
            std::cout << "Animal constructor called" << std::endl;
        };

        Animal(const Animal & copy){
            this->type = copy.type;
            std::cout << "Animal copy constructor called" << std::endl;
	        (*this) = copy;
        };

        Animal & operator= (const Animal & other){
            this->type = other.getType();
	        return (*this);
        };

        std::string getType() const{
            return (this->type);
        };

        virtual void makeSound() const=0;
};

std::ostream & operator<< (std::ostream &out, const Animal &animal){
    out << animal.getType();
	return (out);
};

#endif
