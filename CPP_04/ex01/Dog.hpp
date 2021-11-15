#ifndef _DOG_HPP
# define _DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :

        Dog(void);
        Dog(const std::string name);
        Dog(const Dog &dog);
        virtual ~Dog(void);
        Dog &operator=(const Dog &dog);

        virtual void makeSound(void) const;
        const Brain& getBrain() const;

    private:
	    Brain *_brain;

};

std::ostream &operator<<(std::ostream &ostream, Dog const & dog);

#endif