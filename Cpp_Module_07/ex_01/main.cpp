#include "iter.hpp"
#include <iostream>
template <typename T>
void display(T &i)
{
    std::cout << i << std::endl;
}

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    float b[10] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9};
    char c[10] = {'a','b','c','d','e','f','g','h','i','j'};

    iter(a, 10, &display);
    iter(b, 10, &display);
    iter(c, 10, &display);
    return (0);
}