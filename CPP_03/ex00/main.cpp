#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("CL4P");

	clap.attack("CL4P-TP");
	clap.takeDamage(24);
	clap.beRepaired(50);
	clap.takeDamage(42);
	clap.takeDamage(100);
	clap.beRepaired(125);
	return (0);
}