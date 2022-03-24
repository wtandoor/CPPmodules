#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _bitValue;
        static const int _bit = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &obj);

        Fixed & operator= (const Fixed &obj);
	    Fixed & operator= (double const &floating);
	    Fixed & operator= (int const &integer);

        bool operator==(const Fixed & right);
        bool operator!=(const Fixed & right);
        bool operator>(const Fixed & right);   
        bool operator<(const Fixed & right);
        bool operator>=(const Fixed & right);
        bool operator<=(const Fixed & right);
        
        Fixed operator+(const Fixed & right);
	    Fixed operator-(const Fixed & right);
	    Fixed operator*(const Fixed & right);
	    Fixed operator/(const Fixed & right);

	    Fixed & operator++();
	    Fixed operator++(int);
	    Fixed & operator--();
	    Fixed operator--(int);

	    static Fixed & min(Fixed & first, Fixed & last);
	    static Fixed & max(Fixed & first, Fixed & last);
	    static const Fixed & min(const Fixed & first, const Fixed & last);
	    static const Fixed & max(const Fixed & first, const Fixed & last);

        int getRawBits(void) const;
        int getBit(void) const;
        void setRawBits(int const raw);

        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif