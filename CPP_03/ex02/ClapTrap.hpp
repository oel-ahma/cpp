#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <time.h>

class ClapTrap
{
    protected :

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _AttackDamage;

    public :

        ClapTrap(void);
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &clapTrap);
        virtual ~ClapTrap(void);
        ClapTrap &operator=(const ClapTrap &clapTrap);

        void attack(std::string const &target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        friend std::ostream &operator<<(std::ostream &ostream, ClapTrap const & clapTrap);

};


#endif