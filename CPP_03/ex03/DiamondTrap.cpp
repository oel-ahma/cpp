#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << this->_name << ": SUPER CREATING." << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_AttackDamage = this->ScavTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	std::cout << this->_name << ": SUPER CREATING." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << ": SUPER DESTROYING."  << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is: " << _name << " my ClapTrap name is: " << ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
	*this = diamondTrap;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap) {
	out << "Name: " << diamondTrap._name << " HP: " << diamondTrap._hitPoints
			  << " EP: " << diamondTrap._energyPoints << " Attack Damage: " << diamondTrap._AttackDamage << std::endl;
	return out;
}