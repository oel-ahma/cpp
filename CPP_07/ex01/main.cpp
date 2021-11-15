#include "iter.hpp"

template <typename T>

void print(T t1)
{
	std::cout << t1 << std::endl;
}

class Something
{
	private:
		int _n;

	public:
		Something(void) : _n(41) 
        {
        }
		int get_value( void ) const 
        {
            return this->_n;
        }
};

std::ostream & operator<<(std::ostream & out, Something const & rhs) 
{ 
    out << rhs.get_value(); 
    return out; 
}

template <typename T>

void print(T const & x)
{
    std::cout << x << std::endl;
}

int main() 
{
	int tab[] = {0, 1, 2, 3, 4};
	Something tab2[5];
	::iter(tab, 5, print);
	::iter(tab2, 5, print);

	return 0;
}