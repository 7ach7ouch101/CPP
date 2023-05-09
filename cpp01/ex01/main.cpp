#include "Zombie.hpp"

int main(void)
{
    int nzombies = 5;
    Zombie *zombies = zombieHorde(nzombies, "test");

    for(int i = 0; i < nzombies; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    return (0);
}