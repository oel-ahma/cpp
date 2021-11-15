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
	ostream << "Type: " << animal.type << std::endl;
	return ostream;
}

void Animal::makeSound(void) const
{
    std::cout << "[ * Animal Noisy Sound * ]" << std::endl;
}

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
	ostream << "Type: " << dog.type << std::endl;
	return ostream;
}

void Dog::makeSound(void) const
{
    std::cout << "[ * Ouarf Ouarf * ]" << std::endl;
}

const Brain &Dog::getBrain() const {
	return *_brain;
}


Cat::Cat(void) : _brain(new Brain)
{
    this->type = "Cat";
    std::cout << "Cat Class Created!" << std::endl;
    _brain->setIdeas();
}

Cat::Cat(const std::string name)
{
    this->type = name;
    std::cout << "Cat Class Created!" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    this->type = cat.type;
    _brain = new Brain(*cat._brain);
    std::cout << "Cat Class Created!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "This Cutie Little Cat is Destroyed :(" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(const Cat &cat)
{
    if (this != &cat)
    {
        this->type = cat.type;
        this->_brain = new Brain(*cat._brain);
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &ostream, Cat const & cat) {
	ostream << "Type: " << cat.type << std::endl;
	return ostream;
}

void Cat::makeSound(void) const
{
    std::cout << "[ * Miaou Miaou * ]" << std::endl;
}

const Brain &Cat::getBrain() const {
	return *_brain;
}