/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:19:15 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/20 11:21:46 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    std::string content;
    std::string new_filename;

    if (argc != 4)
        return (print_err("This program takes 3 parameters"), 1);
    get_content(argv[1], content);
    new_filename = replace_filename(argv[1]);
    handle_replacement(argv, content);
    return (0);
}