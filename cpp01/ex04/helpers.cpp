/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oduwoledare <oduwoledare@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:41 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/20 21:19:55 by oduwoledare      ###   ########.fr       */
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
    std::ifstream file;
    std::string line;

    file.open(filename.c_str(), std::ios::in);
    if (file.is_open())
        while (getline(file, line, '\0'))
            content.append(line);
    file.close();
    return (content);
}

void handle_replacement(char **argv, std::string content)
{
    int i = 0;
    int j = 0;
    int len;
    std::string new_filename;

    len = std::string(argv[2]).size();
    new_filename = argv[1];
    new_filename = new_filename.substr(0, new_filename.rfind('.') + 1) + "replace";
    std::ofstream file(new_filename.c_str());
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
