#include "Serialization.hpp"

uintptr_t serialize(t_Serialization* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

t_Serialization* deserialize(uintptr_t raw)
{
    return reinterpret_cast<t_Serialization*>(raw);
}