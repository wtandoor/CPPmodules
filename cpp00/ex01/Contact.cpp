#include "Contact.h"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(std::string FirstName) {
    this->firstName = FirstName;
}

void Contact::setLastName(std::string LastName) {
    this->lastName = LastName;
}

void Contact::setNickname(std::string Nickname) {
    this->nickname = Nickname;
}

void Contact::setPhoneNumber(std::string PhoneNumber) {
    this->phoneNumber = PhoneNumber;
}

void Contact::setDarkestSecret(std::string Secret) {
    this->darkestSecret = Secret;
}

std::string Contact::getFirstName() {
    return this->firstName;
}

std::string Contact::getLastName() {
    return this->lastName;
}

std::string Contact::getNickname() {
    return this->nickname;
}

std::string Contact::getPhoneNumber() {
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}
