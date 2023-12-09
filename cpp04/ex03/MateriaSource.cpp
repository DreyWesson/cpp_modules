/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:21:12 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/09 12:03:35 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "\033[2;37m""\033[3m" "MATERIASOURCE constructor called\n" "\033[0m";
        for (int i = 0; i < 4; i++)
            _store[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "\033[2;37m""\033[3m" "MATERIASOURCE destructor called\n" "\033[0m";
    for (int i = 0; i < 4; i++) {
        delete _store[i];
        _store[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const & cpy) {
    for (int i = 0; i < 4; i++)
    {
        this->_store[i] = NULL;
        this->_store[i] = cpy._store[i];
    }
    *this = cpy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &cpy) {
    if (this != &cpy) {
        for (int i = 0; i < 4; i++)
        {
            delete this->_store[i];
            if (cpy._store[i])
                this->_store[i] = cpy._store[i]->clone();
            else
                this->_store[i] = NULL;
        }
    }
    return (*this);
}
void MateriaSource::learnMateria(AMateria* cpy) {
    for (int i = 0; i < 4; i++) {
        _store[i] = NULL;
        _store[i] = cpy->clone();
    }
}