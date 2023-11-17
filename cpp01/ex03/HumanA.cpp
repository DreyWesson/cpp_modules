/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:32:51 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/17 22:50:02 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), _name(name)
{
}

HumanA::~HumanA()
{
    std::cout << "deconstructor called" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << HumanA::weapon.getType() << std::endl;
}
