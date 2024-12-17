#include "Phonebook.hpp"
#include "Contact.hpp"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::string	mode;
	Phonebook	phoneBook;
	int			i = 0;

	std::cout << "Welcome to PhoneBook!\n" << std::endl;
	do
	{
		std::cout << "Choose mode:\n--- 1 or ADD\n--- 2 or SEARCH\n--- 3 or EXIT" << std::endl;
		std::getline(std::cin, mode);
		if (std::cin.fail())
			break ;
		i = phoneBook.chooseMode(mode);
		if (mode == "3" || mode == "EXIT")
			break ;
	} while (i != 0);
}
