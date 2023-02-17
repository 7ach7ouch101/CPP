#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string&  getType()
        {
            return (type);
        }
        void                setType(std::string type)
        {
            this->type = type;
        }
        //setWeapon();
        ~Weapon();
};

#endif