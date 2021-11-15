#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm : public Form 
{
    public:

        typedef Bureaucrat::GradeTooHighException GradeTooHighException;
        typedef Bureaucrat::GradeTooLowException GradeTooLowException;

        explicit PresidentialPardonForm(const std::string &target);

        virtual ~PresidentialPardonForm();

        void execute(const Bureaucrat &executor) const;
};

#endif