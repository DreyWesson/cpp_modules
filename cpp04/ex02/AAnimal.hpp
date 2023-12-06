/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:25:40 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/06 04:53:01 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
private:

protected:
    std::string type;
    
public:
    virtual void makeSound(void) const = 0;
};

#endif