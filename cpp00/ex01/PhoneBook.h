#ifndef CPP_PHONEBOOK_H
#define CPP_PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.h"

class PhoneBook {
    private:
        Contact contact[8];
        int counter;
    public:
        PhoneBook();
        ~PhoneBook();
        void add(int i);
        void out();
};


#endif
