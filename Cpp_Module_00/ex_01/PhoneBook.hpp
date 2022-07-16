#ifndef PhoneBook_HPP
#define PhoneBook_HPP
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Info[8];
        int i;
        void PhoneBook::SearchContent(int nb);
        void PhoneBook::Addcontact(int i);
        void PhoneBook::printContent(int i);
    public:
        PhoneBook();
        ~PhoneBook();
        void Add();
        void Search();
};

#endif