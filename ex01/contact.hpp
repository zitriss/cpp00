/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:33:11 by tlize             #+#    #+#             */
/*   Updated: 2025/09/01 18:20:30 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
// GETTER
    int get_id();
    int get_phone();
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_darkest_secret();
// SETTER
    void set_id(int new_id);
    void set_phone(int new_phone);
    void set_first_name(std::string new_first_name);
    void set_last_name(std::string new_last_name);
    void set_nickname(std::string new_nickname);
    void set_darkest_secret(std::string new_darkest_secret);
private:
    int id;
    int phone;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
};

#endif