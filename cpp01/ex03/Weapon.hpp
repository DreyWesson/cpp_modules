/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:11:01 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/17 21:58:56 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE_H
#define VIOLENCE_H

#include <iostream>
#include <iomanip>

class Weapon {
public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    const std::string getType();
    void setType(std::string);

private:
    std::string _type;
};


#endif