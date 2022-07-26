#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <stdint.h>

typedef struct s_Serialisation
{
    int a;
} t_Serialization;

uintptr_t serialize(t_Serialization* ptr);

t_Serialization* deserialize(uintptr_t raw);

#endif