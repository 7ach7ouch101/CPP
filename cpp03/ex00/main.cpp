#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap copy("first");
    ClapTrap first;

    first = copy;
    first.attack("second");
    first.takeDamage(10);
    first.beRepaired(10);

    /*ClapTrap clapTrap("Clap1");

    clapTrap.attack("Enemy1");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.attack("Enemy2");
    clapTrap.takeDamage(15);
    clapTrap.attack("Enemy3");*/

    return 0;
}