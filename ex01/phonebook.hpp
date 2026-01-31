/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-31 15:31:00 by user              #+#    #+#             */
/*   Updated: 2026-01-31 15:31:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

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