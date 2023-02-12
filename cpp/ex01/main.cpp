#include "PhoneBook.hpp"
std::string    ToUpper(std::string input)
{
    int i = 0;
    while(input[i])
    {
        input[i] = std::toupper(input[i]);
        i++;
    }
    return (input);
}
int main(void)
{
    PhoneBook phone;
    Contact con;
    std::string input;
    std::string first_name, last_name, nick_name, phone_number, darket_secret;
    int i = 0;
    while(true)
    {
        std::cout << "Enter a command please: (ADD/EXIT/SEARCH)" << std::endl;
        std::cin >> input;
        if((ToUpper(input)) == "ADD")
        {
            std::cout << "Enter your first name please: " << std::endl;
            std::cin >> first_name;
            con.set_contact_firstname(first_name);
            std::cout << "Enter your last name please: " << std::endl;
            std::cin >> last_name;
            con.set_contact_lastname(last_name);
            std::cout << "Enter your nickname please: " << std::endl;
            std::cin >> nick_name;
            con.set_contact_nick_name(nick_name);
            std::cout << "Enter your phone number please: " << std::endl;
            std::cin >> phone_number;
            con.set_contact_phone_number(phone_number);
            std::cout << "Enter your darket secret please: " << std::endl;
            std::cin >> darket_secret;
            con.set_contact_darket_secret(darket_secret);
            phone.addContact(con, i);
        }
        else if((ToUpper(input)) == "SEARCH")
        {
            phone.display(con, i);
            //std::cout << "Please enter a valid index:" << std::endl;
            //std
        }
        else if((ToUpper(input)) == "EXIT")
        {
            std::cout << "BYEEEE ;)" << std::endl;
            exit(0);
        }
        else
            std::cout << "Enter a valid command please" << std::endl;
        if((ToUpper(input)) == "ADD")
            i++;
            if(i == 8)
                i = 0;
    }
}