#include "Zombie.hpp"

int main(void)
{
    Zombie* haytam = newZombie("nafori");
    haytam->announce();
    delete haytam;

    randomChump("Nezuko");
    return (0);
}