/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:09:12 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/14 21:27:28 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>


class Zombie {

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);

private:
    std::string _name;
};

#endif