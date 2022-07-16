#include "Zombie.hpp"

void    randomchump(std::string name)
{
    Zombie randomZombie;

    randomZombie.setName(name);
    randomZombie.announce();
}