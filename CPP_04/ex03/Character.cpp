#include "Character.hpp"

Character::Character(const std::string &name): _name(name), _inventory()
{
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character::Character(const Character &other)
{
	this->operator=(other);
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
			delete _inventory[i];
		for(int i = 0; i < 4; i++)
			_inventory[i] = other._inventory[i]->clone();
	}
	return *this;
}

const std::string &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	for(int i = 0; i < 4 ; i++)
		if (_inventory[i] == NULL && _inventory[i] == m)
			return;
	for(int i = 0; i < 4; i++)
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
}

void Character::unequip(int idx) {
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

bool operator==(const Character& lhs, const Character& rhs) {
	return lhs.getName() == rhs.getName();
}