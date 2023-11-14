/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:34:58 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/14 21:48:03 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    
    return (zombie);
}