/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:08:18 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/29 15:53:11 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    
    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap &cpy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void print_data(void);
    void print_welcome(void);
    
    void setName(std::string name);
    void setHitPoints(unsigned int value);
    void setEnergyPoints(unsigned int value);
    void setAttackDamage(unsigned int value);

    std::string getName();
    unsigned int getHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getAttackDamage();
};



#endif