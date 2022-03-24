#include "Contact.h"
#include "PhoneBook.h"

int main() {
    std::string temp;
    PhoneBook phoneBook;
    int i = 0;
    while (1) {
        std::cin >> temp;
        if (temp == "EXIT"){
            return (0);
        } else if (temp == "ADD") {
            if (i == 8) {
                i = 0;
            }
            phoneBook.add(i);
            i++;
        } else if (temp == "SEARCH") {
            phoneBook.out();
            std::cin.clear();
        } else {
            std::cout << "Not a valid command." << std::endl;
            std::cin.clear();
        }
        std::cin.clear();
    }
    return (0);
}