#include <iostream>
#include <cctype>
#include <cstring>

void	MegaPhone(std::string s)
{
	for (size_t i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	std::cout << s << std::endl;
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			MegaPhone(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
