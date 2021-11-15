#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource 
{
    private:
        AMateria* _inventory[4];
    
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);

        virtual void learnMateria(AMateria *materia);
        virtual AMateria *createMateria(const std::string &type);
};


#endif