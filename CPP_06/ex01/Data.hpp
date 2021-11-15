#ifndef _DATA_HPP_
# define _DATA_HPP_

#include <iostream>
#include <string>

struct Data
{
    Data(int i, char c, float f, double d) : _i(i), _c(c), _f(f), _d(d) 
    {}
    int _i;
    float _f;
    double _d;
    char _c;
};

std::ostream &operator<<(std::ostream &out, const Data &data);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif