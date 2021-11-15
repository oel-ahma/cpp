#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;

    public:
        explicit AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual ~AMateria();
        AMateria &operator=(const AMateria& other);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif