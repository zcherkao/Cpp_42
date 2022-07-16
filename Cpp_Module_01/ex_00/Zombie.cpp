#include "Zombie.hpp"

Zombie::Zombie (void) {}

void    Zombie::setName(std::string arg)
{
    this->name = arg;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie (void)
{
    std::cout << this->name << " Killed by an arrow " << std::endl;
}
