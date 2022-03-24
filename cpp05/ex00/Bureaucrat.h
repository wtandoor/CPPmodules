#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat{
    private:
        std::string const name;
        int grade;
        Bureaucrat(){};
    public:
        Bureaucrat(const std::string name, int range);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat & copy);
        Bureaucrat & operator= (const Bureaucrat & other);

        std::string getName() const;
        int getGrade() const;

        void increaseGrade();
        void decreaseGrade();

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

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bur);

#endif