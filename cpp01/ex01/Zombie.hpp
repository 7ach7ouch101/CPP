#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void    announce(void);
        void    setZombie(std::string name)
        {
            this->name = name;
        }
        ~Zombie();
};


Zombie* zombieHorde(int N, std::string name);
#endif