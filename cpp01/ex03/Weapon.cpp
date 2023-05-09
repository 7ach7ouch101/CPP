#include "Weapon.hpp"

Weapon::Weapon(std::string ww)
{
    this->type = ww;
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string newone)
{
    this->type = newone;
}