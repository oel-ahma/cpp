#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
        this->_hitPoints = 10;
        this->_energyPoints = 10;
        this->_name = "CL4P-TP";
        this->_AttackDamage = 0;
        std::cout << "Nameless Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
        this->_hitPoints = 10;
        this->_energyPoints = 10;
        this->_name = name;
        this->_AttackDamage = 0;
        std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    *this = clapTrap;
    std::cout << "Copy Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
        this->_hitPoints = clapTrap._hitPoints;
        this->_energyPoints = clapTrap._energyPoints;
        this->_name = clapTrap._name;
        this->_AttackDamage = clapTrap._AttackDamage;
        return (*this);
}

void ClapTrap::attack(std::string const &target) const
{
    std::cout << "Attack Called" << std::endl;
    std::cout << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints - amount >= 0)
    {
        std::cout << "Aie !" << std::endl;
        this->_hitPoints -= amount;
    }
    else
        std::cout << "Can't hitPoints already 0 !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Ouuuuu Feels Nice ! (some HP's back)" << std::endl;
    this->_hitPoints += amount;
}

std::ostream &operator<<(std::ostream &ostream, ClapTrap const & clapTrap) {
	ostream << "Name: " << clapTrap._name << " Hit Points: " << clapTrap._hitPoints
		<< " Energy Points: " << clapTrap._energyPoints << " Attack Damage: " << clapTrap._AttackDamage << std::endl;
	return ostream;
}