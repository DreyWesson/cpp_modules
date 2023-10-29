/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_router.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 08:48:29 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/29 09:49:22 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Phonebook.class.hpp"

int PhoneBook::_input_router(std::string type, std::string prop)
{
    if(
        (!type.compare("First name") && _contacts[_id % CONTACT_SIZE].set_fname(prop) == "")
        || (!type.compare("Last name") && _contacts[_id % CONTACT_SIZE].set_lname(prop) == "")
        || (!type.compare("Nickname") && _contacts[_id % CONTACT_SIZE].set_nickname(prop) == "")
        || (!type.compare("Phone num") && _contacts[_id % CONTACT_SIZE].set_phone_num(prop) == "")
    )
        return (1);
    return (0);
}
