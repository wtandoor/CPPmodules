#include "Form.h"

Form::Form() : name(""), sign(false), gradeExec(150), gradeSign(150){
}

std::string Form::getName() const {
    return (this->name);
}

int Form::getGradeExec() const {
    return gradeExec;
}

int Form::getGradeSign() const {
    return gradeSign;
}

bool Form::getSign() const {
    return (this->sign);
}

const char *Form::GradeTooHighException::what() const throw(){
    return ("The Grade Form is too high!");
}

const char *Form::GradeTooLowException::what() const throw(){
    return ("The Grade Form is too low!");
}

std::ostream& operator<< (std::ostream &out, const Form &form)
{
	out << "Name form: " << form.getName() << "\nSign: " << form.getSign() << "\nGrade to Sign: " <<
		form.getGradeSign() << "\nGrade to Execute: " << form.getGradeExec();
	return (out);
}

void Form::beSigned(Bureaucrat & bur){
    if (bur.getGrade() <= this->gradeSign){
        if (this->sign == true)
            throw "The Form already signed";
        this->sign = true;
        std::cout << "* The Form " << this->getName() << " is signed " << std::endl;
    } else {
        throw Form::GradeTooLowException();
    }
}

Form::Form(const Form & copy) : name(copy.name), sign(false) , gradeExec(copy.gradeExec) , gradeSign(copy.gradeSign) {
}

Form::Form(std::string name, int gradeSign, int gradeExec) :  name(name), sign(false), gradeExec(gradeExec) , gradeSign(gradeSign) {
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooLowException();
    if (gradeExec > 150 || gradeSign > 150)
        throw GradeTooHighException();
}