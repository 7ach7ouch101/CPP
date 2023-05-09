#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void init_name(std::string name)
        {
            this->name = name;
        }
        void announce(void);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif