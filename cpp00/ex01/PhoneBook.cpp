#include "PhoneBook.h"

PhoneBook::PhoneBook() {
    counter = 0;
}

PhoneBook::~PhoneBook() {}

std::string nameReduction(std::string arg) {
    std::string temp = arg;
    if (temp.size() >= 10) {
        temp[9] = '.';
        temp.erase(10);
    }
    return (temp);
}


void PhoneBook::add(int i) {
    std::string temp;
    std::cout << "enter first name" << std::endl;
    std::cin >> temp;
    contact[i].setFirstName(temp);
    std::cout << "enter last name" << std::endl;
    std::cin >> temp;
    contact[i].setLastName(temp);
    std::cout << "enter nickname" << std::endl;
    std::cin >> temp;
    contact[i].setNickname(temp);
    std::cout << "enter phone number" << std::endl;
    std::cin >> temp;
    contact[i].setPhoneNumber(temp);
    std::cout << "enter darkest secret" << std::endl;
    std::cin >> temp;
    contact[i].setDarkestSecret(temp);
    if (counter < 8){
        counter++;
    }
}

void PhoneBook::out() {
    int idx = 0;
    if (counter == 0) {
        std::cout << "Haven't contacts to search!" << std::endl;
        return;
    }
    int i = 0;
    while (i < counter) {
        std::cout << std::right << std::setw(10) << i + 1 << '|';
        std::cout << std::right << std::setw(10) << nameReduction(contact[i].getFirstName()) << '|';
        std::cout << std::right << std::setw(10) << nameReduction(contact[i].getLastName()) << '|';
        std::cout << std::right << std::setw(10) << nameReduction(contact[i].getNickname()) << '|' << std::endl;
        i++;
    }
    while (1) {
        std::cout << "please enter index :" << std::endl;
        std::cin >> idx;
        if (idx < 1 || idx > counter){
            std::cout << "Program can't find contact" << std::endl;
            std::cin.clear();
            break;
        }
        std::cout << "No." << idx-- << std::endl;
        std::cout << "1. First Name :" << contact[idx].getFirstName() << std::endl;
        std::cout << "2. Last Name :" << contact[idx].getLastName() << std::endl;
        std::cout << "3. Nickname :" << contact[idx].getNickname() << std::endl;
        std::cout << "4. PhoneNumber :" << contact[idx].getPhoneNumber() << std::endl;
        std::cout << "5. Darkest Secret :" << contact[idx].getDarkestSecret() << std::endl;
        std::cin.clear();
    }
}