/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:32:43 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/02 08:43:46 by ivautrav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(void)
{
	uint		contact_idx;
	Contact		phonebook[MAX_CONTACT];
	std::string	command;
	
	contact_idx = 0;
	while (true)
	{
		std::cout << "\nphonebook> ";
		getline(std::cin, command, '\n');
		if (command == "ADD")
		{
			if (contact_idx < MAX_CONTACT)
				phonebook[contact_idx++] = add_contact();
			else
				std::cout << "Phonebook is full." << std::endl;
		}
		else if (command == "SEARCH")
		{
			if (contact_idx > 0)
				show_phonebook(phonebook, contact_idx);
			else
				std::cout << "Phonebook is empty." << std::endl;
		}
		else if (command == "EXIT")
			break ;
	}
	
	return 0;
}
