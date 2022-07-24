#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename type>
void iter(type a[], size_t b, void (*f)(type const &))
{
    size_t i;
    for (i = 0; i < b; i++)
    {
        f(a[i]);
    }
}

#endif