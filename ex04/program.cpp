/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:42:57 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 19:51:07 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

void    ft_replace_text(std::string &line, std::string  &s1, std::string  &s2)
{
    int i = 0;
    size_t pos = 0;
    while(line.find(s1, pos) != std::string::npos)
    {
        i = line.find(s1, pos);
        line.erase(i, s1.length());
        line.insert(i, s2);
        pos += s2.length();
    }
}

void   ft_replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file;
    std::ofstream new_file;
    std::string line;
    std::string new_filename = filename + ".replace";

    file.open(filename, std::ios::in | std::ios::out); // this for writing case
    if (file.is_open())
    {
        new_file.open(new_filename, std::ios::out); // this for writing in the file
        if (new_file.fail())
        {
            std::cout << "Error Can't Open This File " << std::endl;
            exit(1);
        }
        while (getline(file, line))
        {
            ft_replace_text(line, s1, s2);
            new_file << line << std::endl;
        }
        new_file.close();
        file.close();
    }
    else if (file.fail())
    {
        std::cout << "Error Can't Open This File " << std::endl;
        exit(1);
    }
}
