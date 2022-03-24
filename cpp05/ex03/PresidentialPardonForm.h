#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form{
    private:
        std::string target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(){};
        PresidentialPardonForm(const PresidentialPardonForm & copy);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & copy);

        void execute(Bureaucrat const & executor) const;
};

#endif