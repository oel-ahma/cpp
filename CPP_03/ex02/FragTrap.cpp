# include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
        this->_hitPoints = 100;
        this->_energyPoints = 100;
        this->_name = "FR4G-TP";
        this->_AttackDamage = 30;
        std::cout << "FR4G-TP Constructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
        this->_hitPoints = 100;
        this->_energyPoints = 100;
        this->_name = name;
        this->_AttackDamage = 30;
        std::cout << "FR4G-TP Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << "Copy Constructor Called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
        this->_hitPoints = fragTrap._hitPoints;
        this->_energyPoints = fragTrap._energyPoints;
        this->_name = fragTrap._name;
        this->_AttackDamage = fragTrap._AttackDamage;
        return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "To Keep The Good Vibe, Give Me A High Five!" << std::endl;
}