#ifndef _ANIMAL_HPP
# define _ANIMAL_HPP

# include <iostream>

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

        virtual void makeSound(void) const = 0;
        virtual const std::string& getType(void) const = 0;
};

std::ostream &operator<<(std::ostream &ostream, Animal const & animal);


#endif
