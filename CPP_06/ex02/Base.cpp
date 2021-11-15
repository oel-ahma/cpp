#include "Base.hpp"

Base::~Base()
{
}

Base *generate(void)
{
    srand((unsigned)time(0)); 
    int i = (rand()%3); 

    if (i == 0)
    {
        std::cout << "A Randomly Instance of \"A\" is Created." << std::endl;
        return new A();
    }
    if (i == 1)
    {
        std::cout << "A Randomly Instance of \"B\" is Created." << std::endl;
        return new B();
    }
    std::cout << "A Randomly Instance of \"C\" is Created." << std::endl;
    return new C();
}

void identify(Base *p) 
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void identify(Base &p) 
{
    try {
        A &a = dynamic_cast<A &>(p);
        (void) a;
        std::cout << "A" << std::endl;
    } 
    catch (std::exception &e) {}

    try {
        B &b = dynamic_cast<B &>(p);
        (void) b;
        std::cout << "B" << std::endl;
    } 
    catch (std::exception &e) {}

    try {
        C &c = dynamic_cast<C &>(p);
        (void) c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e) {}
}