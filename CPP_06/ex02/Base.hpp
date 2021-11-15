#ifndef _BASE_HPP
# define _BASE_HPP

#include <random>
#include <stdlib.h>
#include <time.h> 
#include <iostream>

class Base
{
    public :
        virtual ~Base();
};

class A : public Base
{
}; 

class B : public Base
{  
}; 

class C : public Base
{  
}; 

Base * generate(void);
void identify(Base * p);
void identify(Base & p);

#endif