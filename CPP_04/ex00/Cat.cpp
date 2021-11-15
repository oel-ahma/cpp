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
    *this = cat;
    std::cout << "Cat Class Created!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "This Cutie Little Cat is Destroyed :(" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.type;
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