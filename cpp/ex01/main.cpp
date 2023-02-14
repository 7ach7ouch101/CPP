#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    PhoneBook phone;
    Contact con;
    std::string input;
    std::string num_input;

    (void)av;
    int i = 0;
    int index = 0;
    while(true && ac == 1)
    {
        std::cout << "Enter a command please: (ADD/EXIT/SEARCH) : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
                exit(1);
        if(input == "ADD")
            phone.addContact(i);
        else if(input == "SEARCH")
        {
            phone.display(i);
            std::cout << "Please enter a valid index:" << std::endl;
            std::getline(std::cin, num_input);
            if (std::cin.eof())
                exit(1);
            if (num_input[0] && isdigit(num_input[0]))
            {
                index = std::stoi(num_input);
                phone.displayinfo(index, i);
            }
        }
        else if(input == "EXIT")
        {
            std::cout << "BYEEEE ;)" << std::endl;
            exit(0);
        }
        else if(input != "ADD" || input != "EXIT" || input != "SEARCH")
            std::cout << "Enter a valid command please" << std::endl;
        if(input == "ADD")
            i++;
        if(i == 8)
            i = 0;
    }
    std::cout << "TO MUCH ARGS." << std::endl;
    return (0);
}