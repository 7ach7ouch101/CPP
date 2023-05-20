#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        this->ideas[i] = "deep copy";
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;

    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "brain copy constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::printIdeas() const
{
    for(int i = 0; i < 4; i++) 
        std::cout << this->ideas[i] << std::endl;
}