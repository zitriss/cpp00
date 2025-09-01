/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:24:01 by tlize             #+#    #+#             */
/*   Updated: 2025/09/01 18:20:16 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// GETTER
int Contact::get_id() {
    return (this->id);        
}
int Contact::get_phone() {
    return (this->phone);        
}
std::string Contact::get_first_name() {
    return (this->first_name);        
}
std::string Contact::get_last_name() {
	return (this->last_name);        
}
std::string Contact::get_nickname() {
	return (this->nickname);        
}
std::string Contact::get_darkest_secret() {
	return (this->darkest_secret);        
}

// SETTER
void Contact::set_id(int new_id){
	this->id = new_id;
}
void Contact::set_phone(int new_phone){
	this->phone = new_phone;
}
void Contact::set_first_name(std::string new_first_name){
	this->first_name = new_first_name;
}
void Contact::set_last_name(std::string new_last_name){
	this->last_name = new_last_name;
}
void Contact::set_nickname(std::string new_nickname){
	this->nickname = new_nickname;
}
void Contact::set_darkest_secret(std::string new_darkest_secret){
	this->darkest_secret = new_darkest_secret;
}