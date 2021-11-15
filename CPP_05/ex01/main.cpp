#include "Bureaucrat.hpp"

int main(void)
{
	Form ff("", 3, 2);
	Bureaucrat ss("haha", 1);
	try {
		ss.incrementGrade();
		std::cout << ff << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: "<< e.what() << std::endl;
	}

	Bureaucrat b2("haha", 1);
	ff.beSigned(b2);
	b2.signForm(ff);
}