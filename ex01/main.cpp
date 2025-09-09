/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:34:38 by tlize             #+#    #+#             */
/*   Updated: 2025/09/09 14:51:37 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook book;
	while (1)
	{
		std::string input;
		std::cout << "Enter a command ";
		getline(std::cin, input);
		if (input == "ADD")
			book.add_contact();
		else if (input == "SEARCH")
		{
			if (book.show_contacts())
			{
				book.show_single();
			}
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command\n";
	}
	return (0);
}