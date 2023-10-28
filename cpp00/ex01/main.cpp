/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:58:53 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/28 19:45:14 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"
/// @implements
// void setters(Contact *contact)
// {
//     contact->set_lname("42");
//     contact->set_fname("Wolfsburg");
//     contact->set_nname("42");
//     contact->set_phone_num("+42000000000");
//     contact->set_dark_secret("da Vinci");
// }
// void getters(Contact contact)
// {
//     std::cout << "First Name: " << contact.get_fname() << std::endl;
//     std::cout << "Last Name: " << contact.get_lname() << std::endl;
//     std::cout << "Nickname: "  << contact.get_nname() << std::endl;
//     std::cout << "Phone No: " << contact.get_phone_num() << std::endl;
//     std::cout << "Dark Secret: " << contact.get_dark_secret() << std::endl;
// }

/// @note
// an array of contacts
// stores max of 8 contacts
// any new addtn after max, should replace oldest
// remember private and public accessor
// on start-up phonebook should be empty
// prompt to enter command either ADD, SEARCH, EXIT
// ADD
    // If the user enters this command, they are prompted to input the information
    // of the new contact one field at a time. Once all the fields have been completed,
    // add the contact to the phonebook.
    //     The contact fields are: first name, last name, nickname, phone number, and
    // darkest secret. A saved contact can’t have empty fields.
// SEARCH
    // Display the saved contacts as a list of 4 columns: index, first name, last
    // name and nickname.
    // ◦ Each column must be 10 characters wide. A pipe character (’|’) separates
    // them. The text must be right-aligned. If the text is longer than the column,
    // it must be truncated and the last displayable character must be replaced by a
    // dot (’.’).
    // ◦ Then, prompt the user again for the index of the entry to display. If the index
    // is out of range or wrong, define a relevant behavior. Otherwise, display the
    // contact information, one field per line.
// EXIT
    // The program quits and the contacts are lost forever

// Any other input is discarded.
// Once a command has been correctly executed, the program waits for another one. It
// stops when the user inputs EXIT

// int main(void) {
//     Contact contact;
    
//     // setters(&contact);
//     // getters(contact);
//     return (0);
// }

int main(void)
{
    Phonebook Phonebook;
    std::string str;
    Phonebook.user_manual();
    std::cout << "\033[32m""> ""\033[0m";
    while (getline(std::cin, str))
    {
        if (!str.compare("ADD") || !str.compare("add"))
            Phonebook.add_contact();
        else if (!str.compare("SEARCH") || !str.compare("search"))
            Phonebook.search_contact();
        else if (!str.compare("EXIT") || !str.compare("exit"))
            break;
        else
            Phonebook.print_err("   cmd not found. Pls, use the manual!");
        std::cout << "\033[32m""> ""\033[0m";
    }
    return (0);
}
