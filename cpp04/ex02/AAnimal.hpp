/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:25:40 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/06 13:45:37 by doduwole         ###   ########.fr       */
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
    // AAnimal(void);
    // AAnimal(const AAnimal &cpy);
    // AAnimal &operator=(const AAnimal &cpy);
    virtual ~AAnimal(void);

    // virtual void makeSound(void) const;
    // void setType(std::string type);
    // std::string getType(void) const;
};

#endif