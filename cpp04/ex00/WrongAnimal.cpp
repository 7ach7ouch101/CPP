#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal & obj)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    (*this) = obj;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sounds go brrrrrrrrrrrr." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
