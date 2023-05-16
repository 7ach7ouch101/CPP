#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    (*this) = fixed; 
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (this->fixed_point);
}
void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    std::cout << "int constructor called" << std::endl;
    this->fixed_point = (number << this->fract_bits);
}

Fixed::Fixed(float number)
{
    std::cout << "float constructor called" << std::endl;
    this->fixed_point = roundf(number * (1 << this->fract_bits));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed_point / (1 << this->fract_bits));
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point >> this->fract_bits);
}

std::ostream & operator<<(std::ostream &out, const Fixed &fix)
{
    out << fix.toFloat();
    return (out);
}