/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:19:18 by tlize             #+#    #+#             */
/*   Updated: 2025/09/08 18:15:25 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
public:
    void    add_contact();
	void    show_contacts();
    
    int     get_contact_count();
    void	set_contact_count(int new_contact_count);
private:
    Contact		contacts[8];
    int			contact_count = 0;
};

#endif