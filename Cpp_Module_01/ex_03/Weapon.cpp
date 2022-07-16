#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::~Weapon(){}

Weapon::Weapon(){}

Weapon::Weapon(std::string typ)
{
    this->type=typ;
}

std::string Weapon::getType()const
{
    return(this->type);
}

void Weapon::setType(std::string typ)
{
    if (typ == ""){
        std::cout<<"weapon not set"<<std::endl;
        return;
    }
    this->type = typ;
}