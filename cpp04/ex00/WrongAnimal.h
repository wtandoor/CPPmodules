#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal(){
            this->type = "";
            std::cout << "WrongAnimal default constructor called" << std::endl;
        };

        ~WrongAnimal(){
            std::cout << "WrongAnimal destructor called" << std::endl;
        };

        WrongAnimal(std::string type){
            this->type = type;
            std::cout << "WrongAnimal constructor called" << std::endl;
        };

        WrongAnimal(const WrongAnimal & copy){
            std::cout << "WrongAnimal copy constructor called" << std::endl;
            (*this) = copy;
        };

        WrongAnimal & operator= (const WrongAnimal & other){
            this->type = other.getType();
            return (*this);
        };

        std::string getType() const {
            return this->type;
        };

        void makeSound() const {
            std::cout << "WrongAnimal sounds...." << std::endl;
        };
};

std::ostream& operator<< (std::ostream &out, const WrongAnimal &animal)
{
	out << animal.getType();
	return (out);
}

#endif