#include "phonebook.hpp"



int    ChooseMode()
{
    std::string Mode;

    if (Mode != "1" || Mode != "ADD" || Mode != "2" || Mode != "SEARCH" || Mode != "EXIT")
        return std::cout << "Invalid input!" << std::endl, 0;
    else
    {
        
    }
}

int main(int ac, char **av)
{
    std::string Mode;

    std::cout << "Welcome to PhoneBook!\nChoose mode!" << std::endl;
    std::cout << "1 or ADD\n2 or SEARCH\n3 or EXIT" << std::endl;
    
    std::cin >> Mode;
    ChooseMode()
}