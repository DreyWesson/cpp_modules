/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:11 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/28 20:44:56 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
    this->_id = 0;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook destructor called!" << std::endl;
}

void Phonebook::_parse_input(std::string prop, int *flag, std::string type)
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
        if ((!type.compare("First name") && _contacts[_id % 8].set_fname(prop) == "")
            || (!type.compare("Last name") && _contacts[_id % 8].set_lname(prop) == "")
            || (!type.compare("Nickname") && _contacts[_id % 8].set_nickname(prop) == "")
            || (!type.compare("Phone num") && _contacts[_id % 8].set_phone_num(prop) == "")
        )
            _input_err(flag, type);
        else if (!type.compare("Darkest secret"))
            _contacts[_id % 8].set_darkest_secret(prop);
    }
}

void Phonebook::_add_contact()
{
    int flag = 0;
    std::string first_name = "";
    std::string last_name = "";
    std::string nickname = "";
    std::string darkest_secret = "";
    std::string phone_number = "";

    _parse_input(first_name, &flag, "First name");
    _parse_input(last_name, &flag, "Last name");
    _parse_input(nickname, &flag, "Nickname");
    _parse_input(phone_number, &flag, "Phone num");
    _parse_input(darkest_secret, &flag, "Darkest secret");

    this->_id++;
    std::cout << "\033[32m""Contact added!!!" << std::endl;
    std::cin.clear();
}

void    Phonebook::_search_contact()
{
    int id = 0;
    std::string str;
    _view_contacts();
    std::cout << "Enter the contact\'s ID: " << std::endl;
    std::cout << "> ";
    std::cin >> str;
    id = atoi(str.c_str());
    if (std::cin.fail() || (id < 0) || (id > 7) || str.length() > 1)
        std::cout << "Invalid input!" << std::endl;
    else
        _print_contact(id);
    std::cin.clear();
    std::cin.ignore(1000, '\n');
}

void    Phonebook::handle_phonebook()
{
    std::string cmd;

    this->_user_manual();
    std::cout << "\033[32m""> ""\033[0m";
    while (getline(std::cin, cmd))
    {
    if (!cmd.compare("ADD") || !cmd.compare("add"))
        this->_add_contact();
    else if (!cmd.compare("SEARCH") || !cmd.compare("search"))
        this->_search_contact();
    else if (!cmd.compare("EXIT") || !cmd.compare("exit"))
        break;
    else
        this->_print_err("   cmd not found. Pls, use the manual!");
            std::cout << "\033[32m""> ""\033[0m";
    }
}
