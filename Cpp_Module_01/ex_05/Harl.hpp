#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"

class Harl
{
    private:
        void Debug();
        void Info();
        void Warning();
        void Error();
    public:
        ~Harl();
        Harl();
        void complain(std::string level);
};

#endif