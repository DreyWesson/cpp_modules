/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:08:38 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/29 22:48:26 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    // Test ScavClap default constructor
    // ScavTrap trap("Bumble bee");
    // trap.print_data();
    // Test ScavClap parameterized constructor
    ScavTrap trap1;
    trap1.print_data();
    trap1.attack("Spiderman");
    return (0);
}
