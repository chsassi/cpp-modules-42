#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contact[8];
		int		nextContactIndex;
	public:
		Phonebook();
		std::string	getInput(const std::string &info);
		void		addContact();
		void		searchContact();
		int			chooseMode(const std::string &mode);
};

#endif