#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->wep = NULL;
    this->name = name;
}

void    HumanB::attack()
{
    if(wep)
        std::cout << name << " attacks with their " << this->wep->getType() << std::endl; 
    else
        std::cout << "i have no weapon on me" << std::endl;
}

void	HumanB::setWeapon(Weapon &weap)
{
    this->wep = &weap;
}