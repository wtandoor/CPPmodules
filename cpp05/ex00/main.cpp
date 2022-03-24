#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat a("Romches", 1);
		std::cout << a << std::endl;
		a.decreaseGrade();
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat a("Elrich", -1);
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat a("John", 151);
		std::cout << a << std::endl;
		a.decreaseGrade();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}