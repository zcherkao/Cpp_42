#include "Contact.hpp"
#include "PhoneBook.hpp"

int mai (void)
{
    std::string str;
    PhoneBook Data;

    std::cout << "📞   ALLOOO ..." << std::endl;
	std::cout << "Save Contact   : ADD" << std::endl;
	std::cout << "Search Contact : SEARCH" << std::endl;
	std::cout << "End Call       : EXIT" << std::endl;

    while (true)
    {
        std::cout << "ENTER COMMAND  :";
        std::cin >> str;
        if (str == "ADD")
            Data.Add();
        else if (str == "SEARCH")
            Data.Search();
        else if (str == "EXIT"  || std::cin.eof() == 1)
            return (0);
        else
			std::cout << "=== wrong input :/ ===" << std::endl;
        if (std::cin.eof())
            return (0);
    }
    return (0);
}