/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:00:02 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/09 12:03:10 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("") {
    std::cout << "\033[2;37m""\033[3m" "CHARACTER constructor called\n" "\033[0m";
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_leftOnFloor[i] = NULL;        
    }
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i]) {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
        if (this->_leftOnFloor[i]) {
            delete this->_leftOnFloor[i];
            this->_leftOnFloor[i] = NULL;
        }
    }
    std::cout << "\033[2;37m""\033[3m" "CHARACTER deconstructor called\n" "\033[0m";
}

Character::Character(std::string const &name) : _name(name) {
    std::cout << "\033[2;37m""\033[3m" "CHARACTER parameterized constructor called\n" "\033[0m";
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_leftOnFloor[i] = NULL;        
    }
}

Character::Character(Character const &src) : _name(src._name) {
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
        this->_inventory[i] = src._inventory[i];   
    }
    *this = src;
}

Character &Character::operator=(Character const &cpy) {
    /// @note BEFORE
    // if (this != &rhs)
    // {
    //     this->_name = rhs._name;
    //     for (int i = 0; i < 4; i++)
    //         this->_inventory[i] = rhs._inventory[i];
    // }
    // return *this;
    if (this != &cpy)
    {
        this->_name = cpy._name;
        for (int i = 0; i < 4; i++) {
            delete this->_inventory[i];
            if (cpy._inventory[i])
                this->_inventory[i] = cpy._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
            
        }
    }
    return (*this);
}

std::string const &Character::getName() const {
    return (this->_name);
}

void    Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m->clone();
            std::cout << "Character " << this->_name << " equipped at index " << i << " with " << m->getType() << std::endl;
            break;
        }
    }
}

void Character::unequip(int idx) {
    /// @note 
    // if (idx >= 4 || !this->_inventory[idx])
    //     return ;
    // std::cout << "Character " << this->_name << " unequipped from index " << std::endl; 
    // delete this->_inventory[idx];
    // this->_inventory[idx] = NULL;

    if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
            // Store the unequipped AMateria pointer for destruction
            this->_leftOnFloor[idx] = this->_inventory[idx];
            std::cout << "Character " << this->_name << " unequipped from index " << idx << std::endl;
            this->_inventory[idx] = NULL;
        } else {
            std::cout << "\033[31m""Invalid index or empty slot.""\033[0m" << std::endl;
        }
}

void    Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
        std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
        this->_inventory[idx]->use(target);
    } else {
        std::cout << "\033[31m""Invalid index or empty slot.\n""\033[0m";
    }
}
