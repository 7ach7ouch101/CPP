#include "Cat.hpp"

Cat::Cat(std::string type)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = type;
}

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "cat";
}

Cat & Cat::operator=(const Cat & obj)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

Cat::Cat(const Cat & obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    (*this) = obj;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow brit frmaja." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}