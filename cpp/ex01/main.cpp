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
int main(int ac, char **av)
{
    PhoneBook phone;
    Contact con;
    std::string input;
    int num_input;
    int i = 0;
    while(true && ac == 1)
    {
        std::cout << "Enter a command please: (ADD/EXIT/SEARCH) : ";
        std::cin >> input;
        if((ToUpper(input)) == "ADD")
        {
            phone.addContact(i);
        }
        else if((ToUpper(input)) == "SEARCH")
        {
            phone.display(i);
            std::cout << "Please enter a valid index:" << std::endl;
            std::cin >> num_input;
            phone.displayinfo(num_input, i);
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
    std::cout << "TO MUCH ARGS." << std::endl;
    return (0);
}