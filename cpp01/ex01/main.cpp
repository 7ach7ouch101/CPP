#include "Zombie.hpp"

int main(void)
{
    int test = 5;
    
    for(int i = 0; i <= test; test++)
    {
        Zombie* Foo[test] = zombieHorde(test, "haa");
    }
}