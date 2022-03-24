#include "Bureaucrat.h"
#include "Form.h"

int main()
{
	try
	{
		Bureaucrat a("Tzan'Yang", 1);
		Bureaucrat b(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.decreaseGrade();
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form b("f1", 0, 15);
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form b("f1", 100, 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form b("f1", 100, 15);
		Bureaucrat b2("Richard", 101);
		b.beSigned(b2);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form b("f1", 100, 15); //
		Bureaucrat b2("Dinesh", 100);
		b.beSigned(b2);
		b.beSigned(b2);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (const char * ex)
	{
		std::cout << ex << std::endl;
	}


	std::cout << std::endl;
	Form b("f1", 100, 15);
	Bureaucrat b2("Geelfoil", 101);
	b2.signForm(b);
	std::cout << std::endl << b << std::endl;

	std::cout << std::endl;
	Form c("f1", 100, 15);
	Bureaucrat c2("Elrich", 100);
	c2.signForm(c);
	c2.signForm(c);
	std::cout << std::endl << c << std::endl;

	return (0);
}