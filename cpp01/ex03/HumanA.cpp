#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep) : wep(wep)
{
    // this->wep = wep;
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << wep.getType() << std::endl; 
}