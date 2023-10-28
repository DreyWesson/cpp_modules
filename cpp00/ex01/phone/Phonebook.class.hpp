/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/28 20:43:04 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CONTACT 8
#include "../contact/Contact.class.hpp"

class Phonebook
{
private:
    Contact _contacts[8];
    int    _id;
    
    void    _print_contact(int id);
    void    _view_contacts() const;
    void    _parse_input(std::string prop, int *flag, std::string type);
    void    _input_err(int *flag, std::string type);
    void    _add_contact();
    void    _search_contact();
    void    _user_manual();
    void    _print_err(std::string msg);

public:
    Phonebook();
    ~Phonebook();

    void    handle_phonebook();
};

#endif
