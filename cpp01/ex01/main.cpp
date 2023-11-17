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
      zombie.announce();

      Zombie *heap_zombie = newZombie("Foo");
      heap_zombie->announce();
      delete heap_zombie;

      randomChump("foobar");
      return (0);
 }