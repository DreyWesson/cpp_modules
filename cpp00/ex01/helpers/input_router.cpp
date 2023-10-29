/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_router.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 08:48:29 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/29 08:49:14 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phone/Phonebook.class.hpp"

int PhoneBook::_router(std::string type, std::string prop)
{
    if(
        (!type.compare("First name") && _contacts[_id % 8].set_fname(prop) == "")
        || (!type.compare("Last name") && _contacts[_id % 8].set_lname(prop) == "")
        || (!type.compare("Nickname") && _contacts[_id % 8].set_nickname(prop) == "")
        || (!type.compare("Phone num") && _contacts[_id % 8].set_phone_num(prop) == "")
    )
        return (1);
    return (0);
}
