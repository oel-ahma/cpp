#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form 
{
    public:

        typedef Bureaucrat::GradeTooHighException GradeTooHighException;
        typedef Bureaucrat::GradeTooLowException GradeTooLowException;

        explicit ShrubberyCreationForm(std::string const & target);
        virtual ~ShrubberyCreationForm();

        void execute(const Bureaucrat &executor) const;
};


#endif