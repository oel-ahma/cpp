#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        class GradeTooHighException : public std::exception
        {
            private:
                std::string _error;
            public:
                explicit GradeTooHighException(const std::string &str);
                ~GradeTooHighException() _NOEXCEPT;
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            private:
                std::string _error;
            public:
                explicit GradeTooLowException(const std::string &str);
                const char *what() const throw();
                ~GradeTooLowException() _NOEXCEPT;
        };

        Bureaucrat(void);
        Bureaucrat(const std::string &name, int grade);
        virtual ~Bureaucrat(void);

        const std::string &getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        void signForm(const Form& form);

    };

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif