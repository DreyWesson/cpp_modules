/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_router.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 08:48:29 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/29 11:21:59 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Phonebook.class.hpp"

void PhoneBook::_input_router(std::string type, std::string prop, int *flag)
{
    if(
        (!type.compare("First name") && _contacts[_id % CONTACT_SIZE].set_fname(prop) == "")
        || (!type.compare("Last name") && _contacts[_id % CONTACT_SIZE].set_lname(prop) == "")
        || (!type.compare("Nickname") && _contacts[_id % CONTACT_SIZE].set_nickname(prop) == "")
        || (!type.compare("Phone num") && _contacts[_id % CONTACT_SIZE].set_phone_num(prop) == "")
    )
        _input_err(flag, type);
    else if (!type.compare("Darkest secret"))
        _contacts[_id % CONTACT_SIZE].set_darkest_secret(prop);
}
