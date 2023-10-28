/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:31:03 by oduwoledare       #+#    #+#             */
/*   Updated: 2023/10/28 20:46:12 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phone/Phonebook.class.hpp"

void Phonebook::_print_contact(int id)
{
    std::cout   << " ----------------------------------------------------------------- \n"
                << "|    ID    |First Name|Last Name | Nickname |Phone Num |DarkSecret|\n"
                << "|-----------------------------------------------------------------|\n"
                << '|' << std::setw(10) << id
                << '|' << std::setw(10) << _contacts[id].get_fname()
                << '|' << std::setw(10) << _contacts[id].get_lname()
                << '|' << std::setw(10) << _contacts[id].get_nickname()
                << '|' << std::setw(10) << _contacts[id].get_phone_num()
                << '|' << std::setw(10) << _contacts[id].get_darkest_secret()
                << '|' << std::endl
                << " ----------------------------------------------------------------- \n"<< std::endl; 
}

void    Phonebook::_view_contacts() const
{
    std::cout   << " ------------------------------------------- \n"
                << "|                Contact List               |\n"
                << "|-------------------------------------------|\n"
	            << "|    ID    |First Name| Last Name| Nickname |\n"
	            << "|-------------------------------------------|\n";

    for (int i = 0; i < 8; i++)
    {
        std::cout << '|' << std::setw(10) << i;
        std::cout << '|' << std::setw(10) << _contacts[i].get_fname();
        std::cout << '|' << std::setw(10) << _contacts[i].get_lname();
        std::cout << '|' << std::setw(10) << _contacts[i].get_nickname();
        std::cout << '|' << std::endl;
    }
    std::cout   << " ------------------------------------------- \n"<< std::endl;
}

void        Phonebook::_user_manual()
{
    std::cout << "#######################################" << std::endl;
    std::cout << "#                                     #" << std::endl;
    std::cout << "#     Welcome to awesome Phonebook    #" << std::endl;
    std::cout << "#     01. ""\033[32m""ADD" "\033[0m""                         #" << std::endl;
    std::cout << "#     02. ""\033[32m""SEARCH" "\033[0m""                      #" << std::endl;
    std::cout << "#     03. ""\033[31m""EXIT" "\033[0m""                        #" << std::endl;
    std::cout << "#                                     #" << std::endl;
    std::cout << "#######################################" << std::endl;

}

void    Phonebook::_input_err(int *flag, std::string type)
{
    std::cout << "\033[31m""Error:""\033[0m" << std::endl;
    std::cout << "  Invalid input: please enter a valid ""\033[33m"<< type << "\033[0m" << std::endl;
    *flag = 1;
}

void    Phonebook::_print_err(std::string msg)
{
    std::cout << "\033[31m""Error:""\033[0m" << std::endl;
    std::cout << "  " <<  msg << std::endl;
}
