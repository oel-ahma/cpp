#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:

        typedef Bureaucrat::GradeTooHighException GradeTooHighException;
        typedef Bureaucrat::GradeTooLowException GradeTooLowException;

        explicit RobotomyRequestForm(std::string const &target);

        virtual ~RobotomyRequestForm();

        void execute(const Bureaucrat  &executor) const;
};


#endif 