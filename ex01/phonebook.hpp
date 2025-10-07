/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:19:18 by tlize             #+#    #+#             */
/*   Updated: 2025/10/07 13:37:51 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
public:
    void    add_contact();
	int     show_contacts();
    void    show_single();
    int     get_contact_count();
    void	set_contact_count(int new_contact_count);

    PhoneBook();
    
private:
    Contact		contacts[8];
    int			contact_count;
};

#endif