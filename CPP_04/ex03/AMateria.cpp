#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type) 
{
}

AMateria::~AMateria() 
{	
}

AMateria::AMateria(const AMateria& other) : _type(other._type) 
{
}

AMateria& AMateria::operator=(const AMateria &other) 
{
	if (this != &other)
		_type = other._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}