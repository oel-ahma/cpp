#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "A Wild Dog Was Created!" << std::endl;
}

Dog::Dog(const std::string name)
{
    this->type = name;
    std::cout << "A Wild Dog Was Created!" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    this->type = dog.type;
    std::cout << "A Wild Dog Was Created!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "This Cutie Little Dog is Destroyed :(" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        this->type = dog.type;
    }
    return (*this);

}

const std::string & Dog::getType(void) const
{
    return this->type;
}

std::ostream &operator<<(std::ostream &ostream, Dog const & dog) {
	ostream << "Type: " << dog.getType() << std::endl;
	return ostream;
}

void Dog::makeSound(void) const
{
    std::cout << "[ * Ouarf Ouarf * ]" << std::endl;
}