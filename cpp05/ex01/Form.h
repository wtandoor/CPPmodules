#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.h"

class Form{
    private:
        std::string const name;
        bool        sign;
        int const   gradeExec;
        int const   gradeSign;
    public:
        Form();
        ~Form(){};
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form & copy);

        std::string getName() const;
        int         getGradeExec() const;
        int         getGradeSign() const;
        bool        getSign() const;
        void	beSigned(Bureaucrat & bur);

        class GradeTooHighException : public std::exception{
            public:
                GradeTooHighException(){};
                virtual ~GradeTooHighException() throw(){};
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                GradeTooLowException(){};
                virtual ~GradeTooLowException() throw(){};
                virtual const char * what() const throw();
        };
};

std::ostream& operator<< (std::ostream &out, const Form &form);

#endif