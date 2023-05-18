#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    (*this) = obj;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    //this->name = name;
    this->Attackdamage = 20;
    this->Energypoints = 50;
    this->Hitpoints = 100;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    this->name = obj.name;
    this->Attackdamage = obj.Attackdamage;
    this->Energypoints = obj.Energypoints;
    this->Hitpoints = obj.Hitpoints;
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    if(this->Hitpoints > 0 && this->Energypoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->Attackdamage << " points of damage!" << std::endl;
        this->Energypoints = this->Energypoints - 1;
    }
    else
        std::cout << "ScavTrap " << this->name <<" can't do anything sadly :(" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " has entred the Gate Keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}