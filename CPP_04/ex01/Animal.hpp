#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal
{
    protected :
        std::string type;
    
    public :

        Animal(void);
        Animal(const std::string name);
        Animal(const Animal &Animal);
        virtual ~Animal(void);
        Animal &operator=(const Animal &Animal);

        virtual void makeSound(void) const;
        virtual const std::string& getType(void) const;
        void setType(std::string const newType);
};

std::ostream &operator<<(std::ostream &ostream, Animal const & animal);





#endif
