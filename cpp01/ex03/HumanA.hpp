#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &wep;
    public:
        void    attack();
        HumanA(std::string name, Weapon &wep);
};

#endif