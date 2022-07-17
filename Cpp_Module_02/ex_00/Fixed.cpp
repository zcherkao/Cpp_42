#include "Fixed.hpp"

#include <iostream>

void Fixed::setRawBits(int const raw)
{
    this->fixed = raw;
}

int Fixed::getRawBits () const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed;
}

Fixed::Fixed(const Fixed &F)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
}

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &F)
{
    if (this != &F)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixed = F.getRawBits();
    }
    return *this;
}