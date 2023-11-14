/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:06:17 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/14 22:22:05 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

 int main(void)
 {
    Zombie zombie("Batshit");  
    Zombie *zombie2 = zombie.newZombie("Foo");
    // Zombie zombie3("Bar");

    zombie.announce();
    zombie2->announce();
    // zombie3.randomChump("foobar");
    

    delete zombie2;
    return (0);
 }