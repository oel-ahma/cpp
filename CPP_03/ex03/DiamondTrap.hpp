#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private :

	std::string _name;
    DiamondTrap();

    public:
 
	DiamondTrap(const std::string &name);
	DiamondTrap(DiamondTrap const &diamondTrap);
	virtual ~DiamondTrap();

	void    attack(std::string const & target);
	
	DiamondTrap &operator=(DiamondTrap const &diamondTrap);
	friend std::ostream &operator<<(std::ostream &out, DiamondTrap const & diamondTrap);
	void whoAmI(void);
};

#endif