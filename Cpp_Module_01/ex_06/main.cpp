#include "Harl.hpp"

int main (int ac, char **av){
    Harl level;
    if (ac != 2)
    {
        std::cout<<"Too many argument"<<std::endl;
        return (0);
    }
    if (!strcmp(av[1], ""))
    {
        std::cout<<"argument is empty"<<std::endl;
        return (0);
    }
    level.complain(av[1]);
}
