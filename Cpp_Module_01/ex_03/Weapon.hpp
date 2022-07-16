#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        void setType(std::string typ);
        Weapon(std::string typ);
        std::string getType()const;
};

#endif