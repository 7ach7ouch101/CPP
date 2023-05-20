#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    /*int size = 6;
    Animal  *animal[size];

    for(int i = 0; i < size / 2 ; i++)
    {
        animal[i] = new Dog;
    }
    for(int i = size / 2 ; i < size; i++)
    {
        animal[i] = new Cat;
    }
    std::cout << "-------------------------------------" << std::endl;
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << animal[i]->getType() << std::endl;
        animal[i]->makeSound();
    }
    std::cout << "-------------------------------------" << std::endl;
    for(int i = 0 ; i < size ; i++)
    {
        delete animal[i];
    }*/
    std::cout << "-------------TEST COPIES-------------" << std::endl;
    Dog *j = new Dog;
    Dog *l = new Dog;

    *l = *j;

    delete l;
    j->printIdeasfrombrain();
    delete j;
}