/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:41 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/20 11:52:04 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void print_err(std::string msg)
{
    std::cout << "\033[31m""Error""\033[0m" << std::endl;
    std::cout << "  " << msg << std::endl;
}

std::string get_content(std::string filename, std::string& content)
{
    std::fstream file;
    std::string line;

    file.open(filename);
    if (file.is_open())
        while (file.good())
        {
            getline(file, line, '\0');
            content.append(line);
        }
    file.close();
    return (content);

}

void handle_replacement(char **argv, std::string content)
{
    int i = 0;
    int j = 0;
    int len;
    std::string new_filename;

    len = std::strlen(argv[2]);
    new_filename = argv[1];
    new_filename = new_filename.substr(0, new_filename.rfind('.') + 1) + "replace";
    std::ofstream file(new_filename);
    if (!file.is_open())
        print_err("File error");
    else
        while (content[i])
        {
            j = 0;
            if (content[i] == argv[2][j] && std::string(argv[2]).compare(content.substr(i, len)) == 0)
            {
                file << argv[3];
                i += len - 1;
            }
            else
                file << content[i];
            i++;
        }
}
