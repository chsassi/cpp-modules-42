#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <cstring>
# include "Contact.hpp"

#define MAX_SIZE 10

class Phonebook
{
	private:
		Contact	contact[8];
		int		ContactIndex;
	public:
		Phonebook();
		std::string	getInput(const std::string &info);
		void		addContact();
		void		searchContact();
		int			chooseMode(const std::string &mode);
		void		showPhonebook();
};

#endif