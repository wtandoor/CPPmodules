#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain{
    protected:
        std::string idea[100];
    public:
        Brain(){
            std::cout << "Brain default constructor called" << std::endl;
        };

        ~Brain(){
            std::cout << "Brain destructor called" << std::endl;
        };

        Brain(const Brain & copy){
            (*this) = copy;
            std::cout << "Brain copy constructor called" << std::endl;
        };

        Brain & operator= (const Brain & other) {
            for (int i = 0; i < 100; i++){
                idea[i] = other.idea[i];
            }
            return (*this);
        };
};

#endif
