/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:47:34 by tlize             #+#    #+#             */
/*   Updated: 2025/09/08 18:54:02 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		PhoneBook::get_contact_count() {
    return (this->contact_count);        
}

void	PhoneBook::set_contact_count(int new_contact_count){
	this->contact_count = new_contact_count;
}

void	PhoneBook::add_contact()
{
    int position = this->get_contact_count();
    this->set_contact_count(position + 1);
    Contact newcontact;
    std::string input;
    int number;
    //FILL
    newcontact.set_id(position);
    std::cout << "First name ?\n";
    getline(std::cin, input);
    newcontact.set_first_name(input);
    std::cout << "Last name ?\n";
    getline(std::cin, input);
    newcontact.set_last_name(input);
    std::cout << "Nickname ?\n";
    getline(std::cin, input);
    newcontact.set_nickname(input);
    std::cout << "Phone number ?\n";
    std::cin >> number;
    newcontact.set_phone(number);
    std::cout << "Darkest secret ?\n";
    getline(std::cin, input);
    newcontact.set_darkest_secret(input);
    position = position % 8;
    this->contacts[position] = newcontact;
}

static void	format_string(std::string str)
{
    if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	else if (str.length() < 10)
	{
		str = std::string(10 - str.length(), ' ') + str;
	}
}

void	PhoneBook::show_contacts()
{
    std::cout << "   Index  |First name| Last name| Nickname \n";
    std::cout << "===========================================\n";
    for (int i = 0; i < this->get_contact_count() || i < 8; i++)
    {
        std::string temp_id = std::to_string(contacts[i].get_id());
        std::string temp_fname = contacts[i].get_first_name();
        std::string temp_lname = contacts[i].get_last_name();
        std::string temp_nickname = contacts[i].get_nickname();
		format_string(temp_id);
		format_string(temp_fname);
		format_string(temp_lname);
		format_string(temp_nickname);
		std::cout << temp_id << "|" << temp_fname << "|" << temp_lname << "|" << temp_nickname << "\n";
    }
}