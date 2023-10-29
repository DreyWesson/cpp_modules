/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:06:43 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/29 02:07:53 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phone/Phonebook.class.hpp"

void PhoneBook::_parse_input(std::string prop, int *flag, std::string type)
{
    while (std::cin.good() && (prop.empty() || *flag == 1))
    {
        *flag = 0;
        std::cout << type << "> ";
        getline(std::cin, prop);
        if (prop.empty())
        {
            _print_err("Invalid input: please enter non empty value");
            continue;
        }
        if (
            (!type.compare("First name") && _contacts[_id % 8].set_fname(prop) == "")
            || (!type.compare("Last name") && _contacts[_id % 8].set_lname(prop) == "")
            || (!type.compare("Nickname") && _contacts[_id % 8].set_nickname(prop) == "")
            || (!type.compare("Phone num") && _contacts[_id % 8].set_phone_num(prop) == "")
        )
            _input_err(flag, type);
        else if (!type.compare("Darkest secret"))
            _contacts[_id % 8].set_darkest_secret(prop);
    }
}
