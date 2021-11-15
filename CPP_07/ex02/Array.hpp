#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>

template<typename T>
class Array 
{
    private:
        T *_arr;
        int _size;

    public:
        Array();
        explicit Array(unsigned int n);
        Array(const Array<T> &other);
        virtual ~Array();

        Array<T> &operator=(const Array<T> &other);
        T &operator[](int index);
        T const & operator[](int index) const;

        int size() const;
};

template<typename T>
Array<T>::Array() : _arr(), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{
}

template<typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

template<typename T>
int Array<T>::size() const
{
	return _size;
}

template<typename T>
Array<T>::Array(const Array<T> &other)
{
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if(this != &other) 
    {
		delete[] _arr;
		_size = other._size;
		_arr = new T[_size];
		memcmp(other._arr, _arr, _size);
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index)
{
	if(index < 0 || index >= _size)
		throw std::exception();
	return _arr[index];
}

template<typename T>
T const &Array<T>::operator[](int index) const
{
	if(index < 0 || index >= _size)
		throw std::exception();
	return _arr[index];
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr)
{
	out << "[";
	for(int i = 0; i < arr.size(); ++i)
		out << arr[i];
	out << "]" << std::endl;
	return out;
}

#endif