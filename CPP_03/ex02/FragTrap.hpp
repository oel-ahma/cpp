#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :

        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap &fragTrap);
        virtual ~FragTrap(void);
        FragTrap &operator=(const FragTrap &fragTrap);

        void highFivesGuys(void);
};

#endif