/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:42:58 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/06 04:47:00 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal()
{
    // std::cout << "Dog constructor called\n";
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    // std::cout << "Dog destructor called\n";
    delete brain;
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog &Dog::operator=(const Dog &cpy) {
    if (this != &cpy)
    {
        this->type = cpy.type;
        this->brain = new Brain( *cpy.brain );
    }
    return (*this);
}

void Dog::makeSound(void) const {
    std::cout << "Bark!!!\n";
}