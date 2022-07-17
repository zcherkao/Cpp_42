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
        static Fixed max(Fixed &c1, Fixed &c2);
        static Fixed max(const Fixed &c1, const Fixed &c2);
        static Fixed min(Fixed &c1, Fixed &c2);
        static Fixed min(const Fixed &c1, const Fixed &c2);
        Fixed operator+ (const Fixed &c);
        Fixed operator* (const Fixed &c);
        Fixed operator- (const Fixed &c);
        Fixed operator/ (const Fixed &c);
        Fixed operator++ ();
        Fixed operator-- ();
        Fixed operator++ (int);
        Fixed operator-- (int);
        bool operator> (const Fixed &c);
        bool operator< (const Fixed &c);
        bool operator>= (const Fixed &c);
        bool operator<= (const Fixed &c);
        bool operator== (const Fixed &c);
        bool operator!= (const Fixed &c);

};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif