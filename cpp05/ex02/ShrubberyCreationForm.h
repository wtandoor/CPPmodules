#ifndef SHRUBBERYCREATIONFORN_H
#define SHRUBBERYCREATIONFORN_H

#include <ostream>
#include <fstream>
#include "Form.h"

class ShrubberyCreationForm : public Form{
    private:
        std::string target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm(){};
        ShrubberyCreationForm(const ShrubberyCreationForm & copy);
        ShrubberyCreationForm & operator= (const ShrubberyCreationForm & other);

        void execute(Bureaucrat const & executor) const;
};

#endif