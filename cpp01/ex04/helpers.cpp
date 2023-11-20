/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:14:41 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/20 11:18:28 by doduwole         ###   ########.fr       */
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
    if (!file.is_open())
    {
        print_err("File error");
        return (NULL);
    }
    while (file.good())
    {
        getline(file, line, '\0');
        content.append(line);
    }
    file.close();
    return (content);

}

std::string replace_filename(std::string filename)
{
    return (filename.substr(0, filename.rfind('.') + 1) + "replace");
}

void handle_replacement(char **argv, std::string content)
{
    int i = 0;
    int j = 0;
    int len = std::strlen(argv[2]);
    
    std::ofstream file(replace_filename(argv[1]));
    if (!file.is_open())
    {
        print_err("File error");
        return ;
    }
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
