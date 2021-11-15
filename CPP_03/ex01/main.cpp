
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap *clap = new ClapTrap("CL4P");
	clap->attack("CL4P-TP");
	clap->takeDamage(24);
	clap->beRepaired(50);
	clap->takeDamage(42);
	clap->takeDamage(100);
	clap->beRepaired(125);
	delete clap;

	std::cout << "---" << std::endl;

	ScavTrap *scav = new ScavTrap("SC4V");
	scav->attack("CL4P-TP");
	scav->takeDamage(24);
	scav->beRepaired(50);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(125);
	scav->guardGate();

	delete scav;

	return (0);
}