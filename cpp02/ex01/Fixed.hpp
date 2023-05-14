#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed & operator=(const Fixed &fixed);
        ~Fixed();
        Fixed(const int number);
        Fixed(float number);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};



#endif