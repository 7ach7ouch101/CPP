#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void    addContact(Contact obj, int i);
        void    display(Contact con, int i);
};

void    PhoneBook::addContact(Contact obj, int i)
{
    this->contact[i] = obj;
}

void    PhoneBook::display(Contact con, int i)
{
    this->contact[i];
    //std::cout << i << std::endl;
    //std::cout << i << " | " << con.firstname << " | " << std::endl;
    //return (this->firstname);
}
#endif