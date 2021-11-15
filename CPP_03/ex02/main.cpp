
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap *frag = new FragTrap("FR4G");
	frag->attack("FR4G-TP");
	frag->takeDamage(24);
	frag->beRepaired(50);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(125);
	frag->highFivesGuys();

	delete frag;

	return (0);
}