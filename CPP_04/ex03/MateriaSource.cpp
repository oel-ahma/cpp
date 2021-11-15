#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : _inventory()
{
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete _inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
			delete _inventory[i];
		for(int i = 0; i < 4; i++)
			_inventory[i] = other._inventory[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia)
	{
		for(int i = 0; i < 4; i++)
			if (_inventory[i] == NULL) {
				_inventory[i] = materia->clone();
				return;
			}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < 4; i++) {
		if (_inventory[i] !=  NULL)
			if (_inventory[i]->getType() == type)
				return _inventory[i]->clone();
	}
	return NULL;
}