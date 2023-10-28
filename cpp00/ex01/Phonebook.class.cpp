/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:11 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/28 17:53:22 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
    this->_index = 0;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook destructor called!" << std::endl;
}

void    Phonebook::print_err(int *flag, std::string type)
{
                std::cout << "Invalid input: please enter a valid " << type << std::endl;
                *flag = 1;
}

void Phonebook::parse_input(std::string prop, int *flag, std::string type)
{
    while (std::cin.good() && (prop.empty() || *flag == 1))
    {
        *flag = 0;
        std::cout << type << "> ";
        getline(std::cin, prop);
        if (prop.empty())
            std::cout << "Invalid input: please enter non empty " << type << std::endl;
        if ((!type.compare("First name") && _contacts[_index % 8].set_fname(prop) == "")
            || (!type.compare("Last name") && _contacts[_index % 8].set_lname(prop) == "")
            || (!type.compare("Nickname") && _contacts[_index % 8].set_nickname(prop) == "")
            || (!type.compare("Phone num") && _contacts[_index % 8].set_phone_num(prop) == "")
        )
            print_err(flag, type);
        else if (!type.compare("Darkest secret"))
            _contacts[_index % 8].set_darkest_secret(prop);
            
    }
}

void Phonebook::add_contact()
{
    int flag = 0;
    std::string first_name = "";
    std::string last_name = "";
    std::string nickname = "";
    std::string darkest_secret = "";
    std::string phone_number = "";


    parse_input(first_name, &flag, "First name");
    parse_input(last_name, &flag, "Last name");
    parse_input(nickname, &flag, "Nickname");
    parse_input(phone_number, &flag, "Phone num");
    parse_input(darkest_secret, &flag, "Darkest secret");

    this->_index++;
    std::cout << "\033[32m""Contact added!!!" << std::endl;
    std::cin.clear();
}

void    Phonebook::search_contact()
{
    int id = 0;
    std::string str;
    view_contact();
    std::cout << "Enter the contact\'s ID: " << std::endl;
    std::cout << "> ";
    std::cin >> str;
    id = atoi(str.c_str());
    if (std::cin.fail() || (id < 0) || (id > 7) || str.length() > 1)
        std::cout << "Invalid input!" << std::endl;
    else
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
    std::cin.clear();
    std::cin.ignore(1000, '\n');
}

void    Phonebook::view_contact() const
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

void        Phonebook::user_manual()
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

