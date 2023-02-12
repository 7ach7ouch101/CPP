#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void    addContact(int i);
        void    display(int i);
        void    displayinfo(int num_input, int i);
};

void    PhoneBook::addContact(int i)
{
    std::string first_name, last_name, nick_name, phone_number, darket_secret;
    std::cout << "Enter your first name please: " << std::endl;
    getline(std::cin, first_name);
    if (std::cin.eof())
        exit(1);
    contact[i].set_contact_firstname(first_name);
    std::cout << "Enter your last name please: " << std::endl;
    getline(std::cin, last_name);
    if (std::cin.eof())
        exit(1);
    contact[i].set_contact_lastname(last_name);
    std::cout << "Enter your nickname please: " << std::endl;
    getline(std::cin, nick_name);
    if (std::cin.eof())
        exit(1);
    contact[i].set_contact_nick_name(nick_name);
    std::cout << "Enter your phone number please: " << std::endl;
    getline(std::cin, phone_number);
    if (std::cin.eof())
        exit(1);
    contact[i].set_contact_phone_number(phone_number);
    std::cout << "Enter your darket secret please: " << std::endl;
    getline(std::cin, darket_secret);
    if (std::cin.eof())
        exit(1);
    contact[i].set_contact_darket_secret(darket_secret);
}

void    PhoneBook::display(int i)
{
    int j = 0;
    while(j < i)
    {
        std::cout << j << " | " << contact[j].get_firstname() << " | " << contact[j].get_lastname() << " | " << contact[j].get_nick_name() << " | " << std::endl;
        j++;
    }
}

void    PhoneBook::displayinfo(int num_input, int i)
{
    std::cout << "hazakiiiiiiii." << std::endl;
    if(num_input >= i || num_input < 0)
    {
        std::cout << "Please enter a valid index." << std::endl;
        return ;
    }
    std::cout << "First name : " << contact[num_input].get_firstname() << std::endl;
    std::cout << "Last name : " << contact[num_input].get_lastname() << std::endl;
    std::cout << "Nickname : " << contact[num_input].get_nick_name() << std::endl;
    std::cout << "Phonenumber : " << contact[num_input].get_phone_number() << std::endl;
    std::cout << "Darkest secret : " << contact[num_input].get_darket_secret() << std::endl;
    return ;
}
#endif