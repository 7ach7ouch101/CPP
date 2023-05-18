#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    (*this) = obj;
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    this->Attackdamage = 30;
    this->Energypoints = 100;
    this->Hitpoints = 100;
}

FragTrap & FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->name = obj.name;
    this->Attackdamage = obj.Attackdamage;
    this->Energypoints = obj.Energypoints;
    this->Hitpoints = obj.Hitpoints;
    return (*this);
}

void FragTrap::attack(std::string const & target)
{
    if(this->Hitpoints > 0 && this->Energypoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->Attackdamage << " points of damage!" << std::endl;
        this->Energypoints = this->Energypoints - 1;
    }
    else
        std::cout << "FragTrap " << this->name <<" can't do anything sadly :(" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives broooosss !!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}