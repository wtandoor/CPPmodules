#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : Form(copy), target(copy.target){
    (*this) = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator= (const PresidentialPardonForm & copy){
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialFormPardon", 25, 5), target(target){

}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const{
    if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true)
        std::cout << "<" << this->target << "> has been pardoned by Zaphod Beeblebrox." << std::endl;
    else if (!(this->getSign()))
        throw ("The form not signed!");
    else
        throw Bureaucrat::GradeTooLowException();
}
