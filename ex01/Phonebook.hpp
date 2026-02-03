#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cctype>
#include <iomanip>

class Phonebook
{
    private:
        Contact _contacts[8];
        int _count;
        int _nextIndex;
    
    public:
        Phonebook();

        void add();
        void search() const;
};

#endif