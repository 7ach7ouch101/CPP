#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void    addContact(Contact obj, int i);
};

void    PhoneBook::addContact(Contact obj, int i)
{
    this->contact[i] = obj;
}

#endif