#include "Zombie.hpp"

int main ()
{
    Zombie* Zombie = zombieHorde(10, "hulk");
    for (int i = 0; i < 10; i++)
    {
        Zombie[i].announce();
    }
    delete[] Zombie;
    return (0);
}