//
// Created by Weasley Tandoori on 2/28/22.
//

#ifndef CPP_CONTACT_H
#define CPP_CONTACT_H

#include <iostream>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickname(std::string);
        void setPhoneNumber(std::string);
        void setDarkestSecret(std::string);

        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        Contact();
        ~Contact();

};


#endif //CPP_CONTACT_H
