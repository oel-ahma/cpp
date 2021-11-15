#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Unknown";
    std::cout << "Animal Class Created!" << std::endl;
}

Animal::Animal(const std::string name)
{
    this->type = name;
    std::cout << "Animal Class Created!" << std::endl;
}

Animal::Animal(const Animal &Animal)
{
    *this = Animal;
    std::cout << "Animal Class Created!" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "This Cutie Little Animal is Destroyed :(" << std::endl;
}

Animal &Animal::operator=(const Animal &Animal)
{
    this->type = Animal.type;
    return (*this);
}

const std::string & Animal::getType(void) const
{
    return this->type;
}

void Animal::setType(std::string const newType)
{
    this->type = newType;
}

std::ostream &operator<<(std::ostream &ostream, Animal const & animal) {
	ostream << "Type: " << animal.getType() << std::endl;
	return ostream;
}

void Animal::makeSound(void) const
{
    std::cout << "[ * Animal Noisy Sound * ]" << std::endl;
}