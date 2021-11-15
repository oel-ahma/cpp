#ifndef _CAT_HPP
# define _CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public :

        Cat(void);
        Cat(const std::string name);
        Cat(const Cat &cat);
        virtual ~Cat(void);
        Cat &operator=(const Cat &cat);

        virtual void makeSound(void) const;

};

std::ostream &operator<<(std::ostream &ostream, Cat const & cat);

#endif