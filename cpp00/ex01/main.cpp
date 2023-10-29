/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:58:53 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/29 08:17:03 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact/Contact.class.hpp"
#include "phone/Phonebook.class.hpp"

int main(void)
{
    PhoneBook phonebook;

    phonebook.handle_phone_book();
    return (0);
}
