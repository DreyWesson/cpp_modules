/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:08:38 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/29 15:58:19 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    // ClapTrap trap("Bumble Bee");
    // trap.attack("spider");
    // trap.attack("anon");
    // trap.beRepaired(1);
    // trap.takeDamage(5);
    // trap.takeDamage(5);
    ScavTrap trap;
    std::cout << trap.getHitPoints() << std::endl;
    return (0);
}
