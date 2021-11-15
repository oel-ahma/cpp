
#include <iostream>
#include "sample_class.hpp"


//constructor
Sample::Sample(float const f) : pi(f), qd(43)
{
    std::cout << "construction called" << std::endl;
    return;
}

//destructor
Sample::~Sample(void)
{
    std::cout << "destruction called" << std::endl;
    return;
}

//function of the class sample
void    Sample::bar(void) const
{
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->pi = " << this->qd << std::endl;
    return;
}