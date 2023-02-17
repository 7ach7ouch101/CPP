#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
    public:
        HumanB();
        Weapon weapon;
        void    attack()
        {
            std::cout << name << "attacks with their " << weapon.getType() << std::endl;
        }
        ~HumanB();
};

#endif