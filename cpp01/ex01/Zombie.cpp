#include "Zombie.hpp"

Zombie::Zombie()
{
   
}
Zombie::~Zombie()
{
    std::cout << this->name << "is DEAD :(" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << "More brainzzzzzzzzzz" << std::endl;
}

void Zombie::setname(std::string name)
{
    this->name = name;
}