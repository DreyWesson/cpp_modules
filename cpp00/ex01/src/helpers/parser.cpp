/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:06:43 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/29 11:35:47 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Phonebook.class.hpp"

void PhoneBook::_parse_input(std::string prop, int *flag, std::string type)
{
    while (std::cin.good() && (prop.empty() || *flag == 1))
    {
        *flag = 0;
        std::cout << type << "> ";
        getline(std::cin, prop);
        if (prop.empty())
            _print_err("Invalid input: please enter non empty value");
        else
            _input_router(type, prop, flag);
    }
}
