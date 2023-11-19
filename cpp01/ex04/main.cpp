/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:19:15 by doduwole          #+#    #+#             */
/*   Updated: 2023/11/19 21:17:12 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

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
    int start = 0;
    int len = std::strlen(argv[2]);
    int len2 = std::strlen(argv[3]);
    
    std::ofstream file(replace_filename(argv[1]));
    if (!file.is_open())
    {
        print_err("File error");
        return ;
    }
    while (content[i])
    {
        j = 0;
        if (content[i] == argv[2][j])
        {
            start = i;
            while (content[start] == argv[2][j])
            {
                j++;
                start++;
            }

            std::cout << j << " " << start <<std::endl;
            if (j == len)
            {
                i = start - 1;
                file << content[i];
                file << argv[3];
                i += len2;
            }
            
        }
        else
            file << content[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    std::string content;
    std::string new_filename;
    std::string str1;
    std::string str2;


    
    if (argc != 4)
        return (print_err("This program takes 3 parameters"), 1);
    get_content(argv[1], content);
    new_filename = replace_filename(argv[1]);
    handle_replacement(argv, content);    


    

    

    return (0);
}