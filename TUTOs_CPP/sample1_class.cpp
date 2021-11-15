
#include <iostream>
#include "sample1_class.hpp"


//constructor
Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
    std::cout << "construction called" << std::endl;
    std::cout << "char = " << this->a1 << std::endl;
    std::cout << "int = " << this->a2 << std::endl;
    std::cout << "float = " << this->a3 << std::endl;

    return;
}

//destructor
Sample::~Sample(void)
{
    std::cout << "destruction called" << std::endl;
    return;
}

//function of the class sample
void    Sample::bar(void)
{
    std::cout << "ya moul lbar" << std::endl;
    return;
}