/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:08:38 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/28 22:07:37 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap trap("Bumble Bee");
    trap.attack("spider");
    trap.attack("anon");
    trap.beRepaired(1);
    trap.takeDamage(5);
    trap.takeDamage(5);
    return (0);
}
