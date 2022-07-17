#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

int main (int ac, char **av)
{
    std::ifstream read;
    std::string line;
    if (ac != 4)
    {
        std::cout << "wrong args number"<< std::endl;
        return (0);
    }
    if (!strcmp(av[1], "") || (!strcmp(av[2], "")))
    {
        std::cout << "invalid input" << std::endl;
        return (0);
    }
    read.open(av[1]);
    if (!read)
    {
        std::cout << "fill not found" << std::endl;
        return (0);
    }
    std::string filename(std::string (av[1]) + ".Replace");
    std::ofstream out;
    out.open(filename);

    while (getline(read, line))
    {
        int found = line.find(av[2]);
        while (found != -1)
        {
            line.erase(found, strlen(av[2]));
            line.insert(found, av[3]);
            found = line.find(av[2], found + strlen(av[3]));
        }
        out << line;
        if (!out.eof())
            out << std::endl;
    }
    out.close();
    read.close();
    return (0);
}