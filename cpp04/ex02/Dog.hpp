/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:41:56 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/06 04:52:42 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain* brain;

protected:

    
public:
    Dog(void);
    Dog(const Dog &cpy);
    Dog &operator=(const Dog &cpy);
    ~Dog(void);


    void makeSound(void) const;
};

#endif