#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::Debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void Harl::Info(){
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}
void Harl::Warning(){
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}
void Harl::Error(){
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::complain(std::string level)
{
    void ((Harl::*tab[4])(void)) = {&Harl::Debug, &Harl::Info, &Harl::Error, &Harl::Warning};

    std::string tab1[4] = {"DEBUG", "INFO", "WARNING", "EROOR"};

    for(int i = 0; i < 4; i++)
    {
        if (level == tab1[i])
            (this->*tab[i])();
    }
}
