#include <iostream>
#include <string>
#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Not Enough Argument." << std::endl;
        return (1);
    }
    Convert c(av[1]);
    
    std::cout << c; 
    return (0);
}