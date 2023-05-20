#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal & obj);
        WrongAnimal & operator=(const WrongAnimal &anomally);
        ~WrongAnimal();
        std::string getType() const;

        void makeSound() const;
};

#endif