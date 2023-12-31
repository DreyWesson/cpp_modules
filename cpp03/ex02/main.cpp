/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:08:38 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/02 11:22:28 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    // Test ScavClap parameterized constructor
    // ScavTrap trap("Bumble bee");
    // trap.print_data();
    // Test ScavClap default constructor
    FragTrap trap1;
    trap1.attack("Spiderman");
    trap1.attack("anon");
    trap1.takeDamage(5);
    trap1.takeDamage(5);
    trap1.takeDamage(5);
    trap1.beRepaired(1);
    trap1.highFivesGuys();
    trap1.takeDamage(86);
    return (0);
}
