/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:40:57 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/02 08:40:25 by ivautrav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact	add_contact(void)
{
    Contact     new_contact;
    std::string buffer;

    std::cout << "First name : ";
    std::cin >> buffer;
    new_contact.set_first_name(buffer);
    std::cout << "Last name : ";
    std::cin >> buffer;
    new_contact.set_last_name(buffer);
    std::cout << "Nick name : ";
    std::cin >> buffer;
    new_contact.set_nickname(buffer);
    std::cout << "Phone Number : ";
    std::cin >> buffer;
    new_contact.set_phone_number(buffer);
    std::cout << "Darkest secret : ";
    std::cin >> buffer;
    new_contact.set_darkest_secret(buffer);
    std::cout << std::endl << "Contact saved." << std::endl;

    return new_contact;
}

static void	search_contact(Contact phonebook[], int nbr_contacts)
{
    int          index;

    std::cout << "Enter index of contact: ";
    std::cin >> index;
    std::cout << std::endl;
    if (std::cin.good() && (index >= 0 && index < nbr_contacts))
    {
        std::cout << phonebook[index].get_first_name() << std::endl;
        std::cout << phonebook[index].get_last_name() << std::endl;
        std::cout << phonebook[index].get_nickname() << std::endl;
        std::cout << phonebook[index].get_phone_number() << std::endl;
        std::cout << phonebook[index].get_darkest_secret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Index not found" << std::endl;
    }
}

static std::string	truncateContact(std::string field)
{
    field = field.erase((FIELDS_WIDTH - 1), \
    field.length() - (FIELDS_WIDTH - 1));
    field.append(".");
    return (field);
}

void	show_phonebook(Contact phonebook[], int nbr_contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(FIELDS_WIDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nbr_contacts; i += 1)
    {
        first_name = phonebook[i].get_first_name();
        last_name = phonebook[i].get_last_name();
        nickname = phonebook[i].get_nickname();

        std::cout << "|" << std::setw(FIELDS_WIDTH) << i;
        first_name = (first_name.length() > FIELDS_WIDTH) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(FIELDS_WIDTH) << first_name;

        last_name = (last_name.length() > FIELDS_WIDTH) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(FIELDS_WIDTH) << last_name;

        nickname = (nickname.length() > FIELDS_WIDTH) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(FIELDS_WIDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    search_contact(phonebook, nbr_contacts);
}