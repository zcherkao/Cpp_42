#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { i = 0;};
PhoneBook::~PhoneBook() { std::cout << "Bye :^)" << std::endl; }

void PhoneBook::SearchContent(int nb)
{
    
    Contact contact = Info[8];
    std::cout << "first name        :" << contact.first_name << std::endl;
    std::cout << "last name         :" << contact.last_name << std::endl;
    std::cout << "nack name         :" << contact.nick_name << std::endl;
    std::cout << "phone number      :" << contact.phone_nb << std::endl;
    std::cout << "darkest secrets   :" << contact.darkest_secret << std::endl;
}

std::string lenghtCheck(std::string str)
{
    if (str.length() >= 10)
    {
        str = str.substr(0, 9);
        str += ".";
    }
    return (str);
}

void PhoneBook::printContent(int i)
{
    Contact& contact = Info[i];
    std::cout << "|";
    std::cout <<  std::setw(10) << i + 1 << "|";
    std::cout <<  std::setw(10) << lenghtCheck(contact.first_name) << "|";
    std::cout <<  std::setw(10) << lenghtCheck(contact.last_name) << "|";
    std::cout <<  std::setw(10) << lenghtCheck(contact.nick_name) << "|" << std:: endl;
}

void PhoneBook::Search()
{
    int nb;
    int j = 0;

    std::cout << "|";
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
    while (j < i)
    {
        printContent(j);
        j++;
    }
    std::cout << "Print the index of the name : ";
    std::cin >> nb;
    nb--;
    if (i = 0)
        std::cout << "PhoneBook is empty ..." << std::endl;
    if (nb <= i && nb >= 0)
        SearchContent(nb);
}

void PhoneBook::Addcontact(int i)
{
    Contact& contact = Info[i];
    std::cout << "first name :";
    if (!(std:: cin >> contact.first_name));
        return ;
    std::cout << "last name :";
    if (!(std:: cin >> contact.last_name));
        return ;
    std::cout << "ncik name :";
    if (!(std:: cin >> contact.nick_name));
        return ;
    std::cout << "phone number :";
    if (!(std:: cin >> contact.phone_nb));
        return ;
    std::cout << "darkest secret :";
    if (!(std:: cin >> contact.darkest_secret))
        return ;
}

void PhoneBook::Add()
{
    int j = 1;

    if (i == 8)
    {
        while (j < i)
        {
            Info[j - 1] = Info[j];
            j++;
        }
        i--;
    }
    Addcontact(i++);
}