#include "FragTrap.hpp"


int main( void )
{
  FragTrap copy("first");
  FragTrap first;

  first = copy;
  first.attack("second");
  first.takeDamage(10);
  first.beRepaired(10);
  first.highFivesGuys();
}