/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:59:45 by doduwole          #+#    #+#             */
/*   Updated: 2023/12/12 19:44:41 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test_decrement() {
    Bureaucrat politico("Decepticon", 149);
    politico.decrement();
    politico.decrement();
    std::cout << politico;
}
void test_increment() {
    Bureaucrat politico("Optimus prime", 2);
    politico.increment();
    politico.increment();
    std::cout << politico;
}
int main(void) {
    Bureaucrat politico("bumble bee", 151);
    std::cout << politico;
    test_decrement();
    test_increment();
    return (0);
}
