#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include <iostream>

Base * generate(void)
{
    srand(time(NULL));
    int x = rand() % 3;
    if (x == 1)
        return new A();
    else if (x == 0)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
    A *a = NULL;
    B *b = NULL;
    C *c = NULL;

    if ((a = dynamic_cast<A*>(p)))
        std::cout << "Type A"<< std::endl;
    if ((b = dynamic_cast<B*>(p)))
        std::cout << "Type B"<< std::endl;
    if ((c = dynamic_cast<C*>(p)))
        std::cout << "Type C"<< std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Type A"<< std::endl;
    }
    catch(std::exception& e)
    {
        (void)e;
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Type B"<< std::endl;
    }
    catch(std::exception& e)
    {
        (void)e;
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Type C"<< std::endl;
    }
    catch(std::exception& e)
    {
        (void)e;
    }
}

int main()
{
    Base *c;
    c = generate();
    identify(c);
    identify(*c);
}