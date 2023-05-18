#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructor called" << std::endl;
    this->name = name;
    this->Attackdamage = 0;
    this->Energypoints = 10;
    this->Hitpoints = 10;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = obj.name;
    this->Attackdamage = obj.Attackdamage;
    this->Energypoints = obj.Energypoints;
    this->Hitpoints = obj.Hitpoints;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
    std::cout << "copy constructor called" << std::endl;
    (*this) = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->Hitpoints > 0 && this->Energypoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->Attackdamage << " points of damage!" << std::endl;
        this->Energypoints = this->Energypoints - 1;
    }
    else
        std::cout << "ClapTrap " << this->name <<" can't do anything sadly :(" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hitpoints > 0)
    {
        this->Hitpoints = this->Hitpoints - amount;
        std::cout << "ClapTrap " << this->name << " took " << amount << " amount of damage."<< std::endl;
    }
    else
    {
        std::cout << "ClapTrap you can't destroy what's is already destroyed :(" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->Hitpoints = this->Hitpoints + amount;
    std::cout << "ClapTrap " << this->name << " been repaired with " << amount << " points." << std::endl;
}
