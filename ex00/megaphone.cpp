/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivautrav <ivautrav@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:37:32 by ivautrav          #+#    #+#             */
/*   Updated: 2023/05/02 05:45:43 by ivautrav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (uint i = 1; i < argc; i++)
	{
		str = argv[i];
		for (uint x = 0; x < strlen(str); x++)
			std::cout << (char) toupper(str[x]);
	}
	std::cout << std::endl;
	return 0;
}
