#include "Cat.hpp"

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
	ostream << "Type: " << cat.getType() << std::endl;
	return ostream;
}

void Cat::makeSound(void) const
{
    std::cout << "[ * Miaou Miaou * ]" << std::endl;
}

const Brain &Cat::getBrain() const {
	return *_brain;
}