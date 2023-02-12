#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
    public:
        void    set_contact_firstname(std::string name);
        void    set_contact_lastname(std::string lastname);
        void    set_contact_nick_name(std::string nickname);
        void    set_contact_phone_number(std::string phone_number);
        void    set_contact_darket_secret(std::string darketsecret);
        /*std::string get_firstname();
        std::string get_lastname();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_darket_secret();*/
        void    display(Contact con, int i);
};

#endif