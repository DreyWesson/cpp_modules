/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:37:00 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/19 16:46:36 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sed.hpp"

void print_err(std::string msg)
{
    std::cout << "\033[31m""Error""\033[0m" << std::endl;
    std::cout << "  " << msg << std::endl;
}
