/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:04:36 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/09 13:27:22 by oduwoledare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria* _store[4];

public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &src);
    MateriaSource& operator=(const MateriaSource &src);
    ~MateriaSource(void);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    AMateria* getMateria( std::string const & type);
};

#endif