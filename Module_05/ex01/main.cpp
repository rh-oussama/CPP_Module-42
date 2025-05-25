#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	Bureaucrat boss("Boss", 1);
	Bureaucrat worker("Worker", 150);

	try
	{
		Form document("Document", 50, 25);
		std::cout << document << std::endl;

		worker.signForm(document);
        boss.signForm(document);
	}

	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form invalidForm("Invalid", 0, 25);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}