#include <iostream>

int main (int ac, char **av)
{
    int i = 1;
    int j = 0;
    (void)ac;
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if (av[i][j] >= 'a' && av[i][j])
                std::cout << (char)toupper(av[i][j]);
            else
                std::cout << av[i][j];
            j++;
        }
        i++;
    }
    if (av[1] == NULL)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        std::cout << std::endl;
    return (0);
}