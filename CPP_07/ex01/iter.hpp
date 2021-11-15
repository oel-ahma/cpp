#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <typename T>

void iter(T *arr, int length, void(*ft)(T)) 
{
    for (int i = 0; i < length; ++i)
        ft(arr[i]);
}


#endif