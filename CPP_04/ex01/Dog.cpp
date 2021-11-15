#include "Dog.hpp"

Dog::Dog(void) : _brain(new Brain)
{
    this->type = "Dog";
    std::cout << "A Wild Dog Was Created!" << std::endl;
    _brain->setIdeas();
}

Dog::Dog(const std::string name)
{
    this->type = name;
    std::cout << "A Wild Dog Was Created!" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    this->type = dog.type;
    _brain = new Brain(*dog._brain);
    std::cout << "A Wild Dog Was Created!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "This Cutie Little Dog is Destroyed :(" << std::endl;
    delete _brain;
}

Dog &Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        this->type = dog.type;
        _brain = new Brain(*dog._brain);
    }
    return (*this);

}

std::ostream &operator<<(std::ostream &ostream, Dog const & dog) {
	ostream << "Type: " << dog.getType() << std::endl;
	return ostream;
}

void Dog::makeSound(void) const
{
    std::cout << "[ * Ouarf Ouarf * ]" << std::endl;
}

const Brain &Dog::getBrain() const {
	return *_brain;
}