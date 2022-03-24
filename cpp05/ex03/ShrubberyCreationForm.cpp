#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy), target(copy.target){
    (*this) = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm:: operator= (const ShrubberyCreationForm & copy){
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137), target(target){

}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
    std::ofstream fileout;
    std::string filename;
    std::string strbuf;

    if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true){
        strbuf = "\n"
                 "                   /        /  /     //    /\n"
                 "                /                 /         /  /\n"
                 "                                /\n"
                 "                               /                //\n"
                 "               /          /            /              /\n"
                 "               /            '/,        /               /\n"
                 "               /              'b      *\n"
                 "                /              '$    //                //\n"
                 "               /    /           $:   /:               /\n"
                 "             //      /  //      */  @):        /   / /\n"
                 "                          /     :@,@):   ,/**:'   /\n"
                 "              /      /,         :@@*: //**'      /   /\n"
                 "                       '/o/    /:(@'/@*\'  /\n"
                 "               /  /       'bq,//:,@@*'   ,*      /  /\n"
                 "                          ,p$q8,:@)'  /p*'      /\n"
                 "                   /     '  / '@@Pp@@*'    /  /\n"
                 "                    /  / //    Y7'.'     /  /\n"
                 "                              :@):.\n"
                 "                             .:@:'.\n"
                 "                           .::(@:.      \n"
                 "\n"
                 "__________________________________________________________________\n";
                 filename = this->target + ".shrubbery";
                 fileout.open(filename);
                 fileout << strbuf;
                 fileout.close();
    } else if (!(this->getSign())){
        throw ("The Form not signed!");
    } else {
        throw Bureaucrat::GradeTooLowException();
    }
}
