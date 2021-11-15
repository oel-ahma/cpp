#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <time.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :

        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &scavTrap);
        virtual ~ScavTrap(void);
        ScavTrap &operator=(const ScavTrap &scavTrap);

        void guardGate(void);
};

#endif