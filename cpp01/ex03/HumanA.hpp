#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon weeapon;
    public:
        // HumanA();
        HumanA(std::string name, Weapon weeapon);
        void    attack()
        {
            std::cout << name << "attacks with their " << weeapon.getType() << std::endl;
        }
        ~HumanA();
};


#endif