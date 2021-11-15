#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <iostream>
#include <algorithm>
#include <vector>
#include <forward_list>

template<typename T>

int easyfind(T t, int value)
{
	typename T::iterator elem = std::find(t.begin(), t.end(), value);
	if (elem == t.end())
		return -1;
	return *elem;
}

#endif