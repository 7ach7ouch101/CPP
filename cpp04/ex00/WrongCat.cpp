#include "WrongCat.hpp"

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = type;
}

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat & WrongCat::operator=(const WrongCat & obj)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat & obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    (*this) = obj;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow brit frmaja." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}