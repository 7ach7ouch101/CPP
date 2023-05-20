#include "Dog.hpp"

Dog::Dog(std::string type)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = type;
}

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "dog";
}

Dog & Dog::operator=(const Dog & obj)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

Dog::Dog(const Dog & obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    (*this) = obj;
}

void Dog::makeSound() const
{
    std::cout << "WOUF WOUF WOUF" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}