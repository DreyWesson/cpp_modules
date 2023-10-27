/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:55:50 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/27 22:20:00 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
    return ;        
}

Contact::~Contact(void) {
    return ;    
}

std::string Contact::get_lname(void) {
    return this->_lname;
}

std::string Contact::get_fname(void) {
    return this->_fname;
}

std::string Contact::get_nname(void) {
    return this->_nname;
}

std::string Contact::get_phone_num(void) {
    return this->_phone_num;
}
std::string Contact::get_dark_secret(void) {
    return this->_dark_secret;
}



void Contact::set_lname(std::string str) {
    this->_lname = str;
}

void Contact::set_fname(std::string str) {
    this->_fname = str;
}

void Contact::set_nname(std::string str) {
    this->_nname = str;
}

void Contact::set_phone_num(std::string str) {
    this->_phone_num = str;
}

void Contact::set_dark_secret(std::string str) {
    this->_dark_secret = str;
}
