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
    std::string tab_1[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i;

    for(i = 0; i < 4; i++)
        if (level == tab_1[i])
                    break;
    switch (i)
    {  
    case 0:
        Debug();
    case 1:
        Info();
    case 2:
        Warning();
    case 3:
        Error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
        break;
    }
}