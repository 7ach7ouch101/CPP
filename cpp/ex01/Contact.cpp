#include "Contact.hpp"

void    Contact::set_contact_firstname(std::string name)
{
    if(name.length() >= 10)
    {
        name[9] = '.';
        name = name.substr(0, 10);
    }
    this->firstname = name;
    return ;
}

void    Contact::set_contact_lastname(std::string lastname)
{
    if(lastname.length() >= 10)
    {
        lastname[9] = '.';
        lastname = lastname.substr(0, 10);
    }
    this->lastname = lastname;
    return ;
}

void    Contact::set_contact_nick_name(std::string nickname)
{
    if(nickname.length() >= 10)
    {
        nickname[9] = '.';
        nickname = nickname.substr(0, 10);
    }
    this->nickname = nickname;
    return ;
}

void    Contact::set_contact_phone_number(std::string phone_number)
{
    this->phonenumber = phone_number;
    return ;
}

void    Contact::set_contact_darket_secret(std::string darketsecret)
{
    this->darkestsecret = darketsecret;
    return ;
}

std::string Contact::get_firstname()
{
    return (this->firstname);
}

std::string Contact::get_lastname()
{
    return (this->lastname);
}

std::string Contact::get_nick_name()
{
    return (this->nickname);
}

std::string Contact::get_phone_number()
{
    return (this->phonenumber);
}

std::string Contact::get_darket_secret()
{
    return (this->darkestsecret);
}