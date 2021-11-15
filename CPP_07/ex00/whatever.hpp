#ifndef _WHATEVER_HPP
#define _WHATEVER_HPP

#include <iostream>

template<typename T>

T const & max(T const &x, T const &y)
{
    if (x > y)
        return (x);
    return (y);
}

template<typename TT>

TT const & min(TT const &x, TT const &y)
{
    if (x < y)
        return (x);
    return (y);
}

template<typename TTT>

void swap(TTT &x, TTT &y)
{
    TTT tmp;
    tmp = x;
    x = y;
    y = tmp;
}

#endif