#ifndef FORM_HPP_
#define FORM_HPP_

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToExec;
        const int _gradeToSign;

    public:
        Form(const std::string &name, int gradeToExec, int gradeToSign);
        Form(const Form &other);
        virtual ~Form();
        Form &operator=(const Form &other);

        void beSigned(Bureaucrat const &bureaucrat);

        virtual void execute(Bureaucrat const & executor) const = 0;

        const std::string &getName() const;
        bool isIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif