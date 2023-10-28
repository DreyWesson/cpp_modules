/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/28 19:43:26 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CONTACT 8
#include "Contact.class.hpp"

class Phonebook
{
private:
    Contact _contacts[8];
    int    _id;
    
    void    _print_contact(int id);
    void    _view_contacts() const;

public:
    Phonebook();
    ~Phonebook();
    void    add_contact();
    void    search_contact();
    void    user_manual();
    void    parse_input(std::string prop, int *flag, std::string type);
    void    input_err(int *flag, std::string type);
    void    print_err(std::string msg);
};

#endif
