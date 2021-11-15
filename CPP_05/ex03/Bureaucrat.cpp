#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    try
    {
        if (grade <= 0)
            throw GradeTooHighException("Grade Too High.");
        else if (grade > 150)
            throw GradeTooLowException("Grade Too Low.");
    }
    catch (const std::exception &e)
    {
        std::cout << "exception caught: " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat(void)
{
}

const std::string &Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{ 
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    try
    {
        --_grade;
        if (_grade <= 0)
            throw GradeTooHighException("Grade too high.");
    }
    catch (const std::exception &e)
    {
        std::cout << "exception caught: " << e.what() << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        ++_grade;
        if (_grade > 150)
            throw GradeTooLowException("Grade too low.");
    }
    catch (const std::exception &e)
    {
        std::cout << "exception caught: " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << "Name: " << bureaucrat.getName() << " Bureaucrat Grade: " << bureaucrat.getGrade() << std::endl;
    return out;
}

void Bureaucrat::signForm(const Form &form) {
	if(form.isIsSigned())
		std::cout << _name << " signs " << form << std::endl;
	else
		std::cout << "bureaucrat " << _name<< " cannot sign "<< form << " because it is not eligible." << std::endl;
}


Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &str) : std::exception(), _error(str)
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{ 
    return _error.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &str) : std::exception(), _error(str)
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{ 
    return _error.c_str();
}