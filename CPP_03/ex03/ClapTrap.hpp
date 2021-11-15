#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <time.h>

class ClapTrap
{
    public :

        explicit ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &clapTrap);
        virtual ~ClapTrap(void);
        ClapTrap &operator=(const ClapTrap &clapTrap);

        virtual void attack(std::string const &target) const;
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);

        friend std::ostream &operator<<(std::ostream &ostream, ClapTrap const & clapTrap);
    
    protected :

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _AttackDamage;
        ClapTrap(void);
};


#endif