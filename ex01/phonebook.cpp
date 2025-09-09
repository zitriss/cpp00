/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:47:34 by tlize             #+#    #+#             */
/*   Updated: 2025/09/09 16:42:39 by tlize            ###   ########.fr       */
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
    //FILL
    newcontact.set_id(position);
    std::cout << "First name ?\n";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty entry\n";
		this->set_contact_count(position);
        return;
    }
    newcontact.set_first_name(input);
    std::cout << "Last name ?\n";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty entry\n";
		this->set_contact_count(position);
        return;
    }
    newcontact.set_last_name(input);
    std::cout << "Nickname ?\n";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty entry\n";
		this->set_contact_count(position);
        return;
    }
    newcontact.set_nickname(input);
    std::cout << "Phone number ?\n";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty entry\n";
		this->set_contact_count(position);
        return;
    }
    try
    {
        std::stoll(input);            
    }
    catch(const std::exception&)
    {
        std::cout << "Not a number\n";
		this->set_contact_count(position);
        return;
    }
    newcontact.set_phone(input);
    std::cout << "Darkest secret ?\n";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Empty entry\n";
		this->set_contact_count(position);
        return;
    }
    newcontact.set_darkest_secret(input);
    position = position % 8;
    this->contacts[position] = newcontact;
}

static std::string  format_string(std::string str)
{
    std::string new_str = str;
    if (new_str.length() > 10)
	{
		new_str = new_str.substr(0, 10);
		new_str[9] = '.';
	}
	else if (new_str.length() < 10)
	{
        while(new_str.length() < 10)
		new_str = " " + new_str;
	}
    return (new_str);
}

int PhoneBook::show_contacts()
{
    std::cout << "     Index|First name| Last name|  Nickname\n";
    std::cout << "===========================================\n";
    for (int i = 0; i < this->get_contact_count() && i < 8; i++)
    {
        std::string temp_id = std::to_string(contacts[i].get_id());
        std::string temp_fname = contacts[i].get_first_name();
        std::string temp_lname = contacts[i].get_last_name();
        std::string temp_nickname = contacts[i].get_nickname();
		temp_id = format_string(temp_id);
		temp_fname = format_string(temp_fname);
		temp_lname = format_string(temp_lname);
		temp_nickname = format_string(temp_nickname);
		std::cout << temp_id << "|" << temp_fname << "|" << temp_lname << "|" << temp_nickname << "\n";
    }
    if (this->contact_count == 0)
        return (0);
    return (1);
}

void PhoneBook::show_single()
{
    while (1)
    {
        std::string input;
        std::cout << "Type an ID or type RETURN\n";
        getline(std::cin, input);
        if (input == "RETURN" || input == "EXIT")
            return ;
        try 
        {
            std::stoi(input);
            for (int i = 0; i < this->get_contact_count() && i < 8; i++)
            {
                if (contacts[i].get_id() == std::stoi(input))
                {
                    std::cout << "Id : " << contacts[i].get_id() << "\n";
                    std::cout << "First name : " << contacts[i].get_first_name() << "\n";
                    std::cout << "Last name : " << contacts[i].get_last_name() << "\n";
                    std::cout << "Nickname : " << contacts[i].get_nickname() << "\n";
                    std::cout << "Phone number : " << contacts[i].get_phone() << "\n";
                    std::cout << "Darkest Secret : " << contacts[i].get_darkest_secret() << "\n";
                    return ;
                }
            }
            std::cout << "Invalid ID or Command\n"; 
        }
        catch (const std::exception&)
        {
            std::cout << "Invalid ID or Command\n";            
        }
    }
}