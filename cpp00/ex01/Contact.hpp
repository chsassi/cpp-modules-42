#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;

	public:
		Contact();
		void	updateContact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkSecret);
};

#endif