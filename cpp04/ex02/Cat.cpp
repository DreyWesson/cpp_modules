/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:31:03 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/06 04:47:52 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal()
{
    // std::cout << "Cat constructor called\n";
    //     try {
    //     this->brain = new Brain();
    // }
    // catch (const std::bad_alloc& e) {
    //     std::cout << "Memory Allocation is failed\n";
    // }
    type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    // std::cout << "Cat destructor called\n";
    delete this->brain;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat &Cat::operator=(const Cat &cpy) {
    if (this != &cpy)
    {
        this->type = cpy.type;
        this->brain = new Brain( *cpy.brain );
    }
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Meow!!!\n";
}

