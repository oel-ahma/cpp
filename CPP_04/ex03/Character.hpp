#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];

    public:
        explicit Character(const std::string &name);
        Character(const Character &other);
        virtual ~Character();

        Character &operator=(const Character &other);

        const std::string &getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);

};

bool operator==(const Character &lhs, const Character &rhs);

#endif