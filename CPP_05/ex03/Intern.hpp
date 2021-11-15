#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include <string>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);

        Form* makeForm(const std::string &formName, const std::string &formTarget);
};


#endif