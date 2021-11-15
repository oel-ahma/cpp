# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
        this->_hitPoints = 100;
        this->_energyPoints = 50;
        this->_name = "SC4V-TP";
        this->_AttackDamage = 20;
        std::cout << "SC4V-TP Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
        this->_hitPoints = 100;
        this->_energyPoints = 50;
        this->_name = name;
        this->_AttackDamage = 20;
        std::cout << "SC4V-TP Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
    std::cout << "Copy Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
        this->_hitPoints = scavTrap._hitPoints;
        this->_energyPoints = scavTrap._energyPoints;
        this->_name = scavTrap._name;
        this->_AttackDamage = scavTrap._AttackDamage;
        return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap Entered Gate Keeper Mode!" << std::endl;
}