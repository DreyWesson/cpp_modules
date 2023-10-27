/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:27:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/10/27 21:22:16 by doduwole         ###   ########.fr       */
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
        int _id;
        std::string _name;
        std::string _email;
        std::string _address;
    public:
        Contact(void);
        ~Contact(void);
        // getters
        int get_id(void);
        std::string get_name(void);
        std::string get_email(void);
        std::string get_address(void);
        // setters
        void set_id(int);
        void set_name(std::string);
        void set_email(std::string);
        void set_address(std::string);
        
};

#endif
