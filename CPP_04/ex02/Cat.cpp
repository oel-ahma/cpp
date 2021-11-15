#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat Class Created!" << std::endl;
}

Cat::Cat(const std::string name)
{
    this->type = name;
    std::cout << "Cat Class Created!" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    this->type = cat.type;
    std::cout << "Cat Class Created!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "This Cutie Little Cat is Destroyed :(" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    if (this != &cat)
        this->type = cat.type;
    return (*this);
}

const std::string & Cat::getType(void) const
{
    return this->type;
}

std::ostream &operator<<(std::ostream &ostream, Cat const & cat) {
	ostream << "Type: " << cat.getType() << std::endl;
	return ostream;
}

void Cat::makeSound(void) const
{
    std::cout << "[ * Miaou Miaou * ]" << std::endl;
}