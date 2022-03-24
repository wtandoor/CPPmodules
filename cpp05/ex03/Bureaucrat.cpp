#include "Bureaucrat.h"
#include "Form.h"

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

void Bureaucrat::signForm(Form & form) {
    try{
        form.beSigned(*this);
        std::cout << "<" << this->getName() << "> signs <" << form.getName() << ">" << std::endl;
    } catch (std::exception & ex){
        std::cout << "<" << this->getName() << "> cannot sign <" << form.getName() << "> because " << ex.what();
    } catch (const char * ex){
        std::cout << ex << std::endl;
    }

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

void Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->getName() << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout <<"<"<< this->getName() << "> cannot execute <" << form.getName() << "> because " << ex.what();
	}
	catch (const char * ex)
	{
		std::cout << ex  << std::endl;
	}
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