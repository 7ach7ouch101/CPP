#include "Zombie.hpp"

int main(void)
{
    int Nzombies = 5;
    Zombie* Foo = zombieHorde(Nzombies, "HAYTAMAT");
    for(int i = 0; i < Nzombies;i++)
        Foo[i].announce();
    delete[] Foo;
    return (0);
}