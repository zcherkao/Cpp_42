#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed;
        static const int fA = 8;
    public:
        Fixed();
        ~Fixed();
        int toInt( void ) const;
        float toFloat( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator = (const Fixed &F);
        Fixed(const Fixed &F);
            Fixed(const int f);
            Fixed(const float f);

};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif