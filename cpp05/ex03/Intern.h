#ifndef INTERN_H
#define INTERN_H

#include "Form.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"

class Intern{
    private:
        std::string arrForm[3];
        Form *(Intern::*func[3])(std::string target);

        Form * newShrubbery(std::string target);
        Form * newRobotomy(std::string target);
        Form * newPresidential(std::string target);

    public:
        Intern();
        ~Intern();

        Form * makeForm(std::string name, std::string target);
};

#endif