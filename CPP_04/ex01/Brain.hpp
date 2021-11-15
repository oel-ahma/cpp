#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{

    public:
        Brain(void);
        ~Brain(void);
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);

        void setIdeas();
        virtual const std::string& getIdeas(int i) const;


    protected:
        std::string _ideas[100];
};

std::ostream &operator<<(std::ostream &out, const Brain &brain);

#endif