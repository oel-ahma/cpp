#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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

class Dog : public Animal
{
    public :

        Dog(void);
        Dog(const std::string name);
        Dog(const Dog &dog);
        virtual ~Dog(void);
        Dog &operator=(const Dog &dog);

        virtual void makeSound(void) const;
        virtual const std::string& getType() const;

};

std::ostream &operator<<(std::ostream &ostream, Dog const & dog);

class Cat : public Animal
{
    public :

        Cat(void);
        Cat(const std::string name);
        Cat(const Cat &cat);
        virtual ~Cat(void);
        Cat &operator=(const Cat &cat);

        virtual void makeSound(void) const;
        virtual const std::string& getType() const;

};

std::ostream &operator<<(std::ostream &ostream, Cat const & cat);

#endif
