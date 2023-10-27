/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:55:50 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/27 21:22:02 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
    return ;        
}

Contact::~Contact(void) {
    return ;    
}

int Contact::get_id(void) {
    return this->_id;
}

std::string Contact::get_name(void) {
    return this->_name;
}

std::string Contact::get_email(void) {
    return this->_email;
}

std::string Contact::get_address(void) {
    return this->_address;
}


void Contact::set_id(int id) {
    this->_id = id;
}

void Contact::set_name(std::string str) {
    this->_name = str;
}

void Contact::set_email(std::string str) {
    this->_email = str;
}

void Contact::set_address(std::string str) {
    this->_address = str;
}
