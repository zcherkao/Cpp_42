#include "Zombie.hpp"

int main()
{
    Zombie* Walker = newZombie("Rick");
    Walker->announce();
    randomchump("Negan");
    delete Walker;
    return (0);
}