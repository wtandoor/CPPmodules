#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm(){};
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        RobotomyRequestForm & operator= (const RobotomyRequestForm & other);

        void execute(Bureaucrat const & executor) const;
};

#endif