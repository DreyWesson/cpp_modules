/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/29 02:01:29 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CONTACT 8
#include "../contact/Contact.class.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int    _id;
    
    void    _print_contact(int id) const;
    void    _user_manual(void) const;
    void    _view_contacts(void) const;
    void    _input_err(int *flag, std::string type) const;
    void    _print_err(std::string msg) const;
    void    _search_contact(void) const;
    void    _parse_input(std::string prop, int *flag, std::string type);
    void    _add_contact();

public:
    PhoneBook();
    ~PhoneBook();

    void    handle_phone_book(void);
};

#endif
