#include "Animal.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = type;
}

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & obj)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

Animal::Animal(const Animal & obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    (*this) = obj;
}

void Animal::makeSound() const
{
    std::cout << "Animal sounds go brrrrrrrrrrrr." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}
