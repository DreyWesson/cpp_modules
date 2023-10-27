/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:27:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/27 22:19:02 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>

// id
// name
// email
// phone_no
class Contact {
    private:
        std::string _lname;
        std::string _fname;
        std::string _nname;
        std::string _phone_num;
        std::string _dark_secret;
    public:
        Contact(void);
        ~Contact(void);
        // getters
        std::string get_lname(void);
        std::string get_fname(void);
        std::string get_nname(void);
        std::string get_phone_num(void);
        std::string get_dark_secret(void);
        // setters
        void set_fname(std::string);
        void set_lname(std::string);
        void set_nname(std::string);
        void set_phone_num(std::string);
        void set_dark_secret(std::string);
};

#endif
