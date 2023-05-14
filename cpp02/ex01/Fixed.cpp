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
    std::cout << "getRawBits member function called" << std::endl;
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
    this->fixed_point = (number * 256);
}

Fixed::Fixed(float number)
{
    this->fixed_point = roundf(number * 256);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed_point / 256)
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point * 256);
}