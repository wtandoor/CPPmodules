#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int range):name(name), grade(range){
    if (range > 150)
        throw Bureaucrat::GradeTooLowException();
    if (range < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(const Bureaucrat & copy){
    (*this) = copy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & copy){
    if (this == & copy)
        return (*this);
    const_cast<std::string &>(this->name) = copy.name;
    this->grade = copy.grade;
    return (*this);
}

int Bureaucrat::getGrade() const{
    return grade;
}

std::string Bureaucrat::getName() const{
    return (name);
}

void Bureaucrat::increaseGrade(){
    this->grade--;
	if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade(){
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("The Grade Bureaucrat is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("The Grade Bureaucrat is too low!");
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bur)
{
	out << "<" << bur.getName() << ">, bureaucrat grade <" << bur.getGrade() << ">";
	return (out);
}