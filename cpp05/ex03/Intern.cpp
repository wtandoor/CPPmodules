#include "Intern.h"

Intern::~Intern(){

}

Form *Intern :: newPresidential(std::string target){
    return (new PresidentialPardonForm(target));
}

Form *Intern::newRobotomy(std::string target){
    return new RobotomyRequestForm(target);
}

Form *Intern::newShrubbery(std::string target){
    return new ShrubberyCreationForm(target);
}

Intern::Intern(){
    this->arrForm[0] = "ShrubberyForm";
    this->arrForm[1] = "RobotomyForm";
    this->arrForm[2] = "PresidentialForm";

    this->func[0] = &Intern::newShrubbery;
    this->func[1] = &Intern::newRobotomy;
    this->func[2] = &Intern::newPresidential;
}

Form *Intern::makeForm(std::string name, std::string target){
    for(int i = 0; i < 3; i++){
        if (name == this->arrForm[i]){
            std::cout << "Intern with name - " << name << " created.>" << std::endl;
            return ((this->*func[i])(target));
        }
    }
    std::cout << "Intern cannot be create." << std::endl;
    return NULL;
}