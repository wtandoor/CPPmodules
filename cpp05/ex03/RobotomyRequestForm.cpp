#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : Form(copy), target(copy.target){
    (*this) = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator= (const RobotomyRequestForm & copy){
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true){
        std::cout << "Makes some drilling noises." << std::endl;
        std::cout << "<" << this->target << "> has been robotomized successfully 50% of the time." << std::endl;
    } else if (!(this->getSign()))
        throw "The Form not signed!";
    else
        throw Bureaucrat::GradeTooLowException();
}
