#include "Zombie.hpp"

int	main( void )
{
    Zombie *heap;

    heap = newZombie("Mahmoud");
    heap->announce();
    randomChump("Meziani");
    delete heap;
}