/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:04:04 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/29 15:57:52 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy){
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy) {
    (void)cpy;
    // if (this != &cpy) {
    //     this->_name = cpy._name;
    //     this->_attackDamage = cpy._attackDamage;
    //     this->_energyPoints = cpy._energyPoints;
    //     this->_hitPoints = cpy._hitPoints;
    // }
    return (*this);
}


// void setName(std::string name) {}
// void setHitPoints(unsigned int value) {}
// void setEnergyPoints(unsigned int value) {}
// void setAttackDamage(unsigned int value) {}

// void getName() {}
// void getHitPoints() {}
// void getEnergyPoints() {}
// void getAttackDamage() {}