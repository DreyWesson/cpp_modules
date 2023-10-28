/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/28 17:43:54 by doduwole         ###   ########.fr       */
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
    int    _index;

public:
    Phonebook();
    ~Phonebook();
    void    add_contact();
    void    search_contact();
    void    view_contact() const;
    void    user_manual();
    void    parse_input(std::string prop, int *flag, std::string type);
    void    print_err(int *flag, std::string type);
};

#endif
