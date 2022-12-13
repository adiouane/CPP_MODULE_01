/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:43:00 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 00:43:50 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    ft_replace(filename, argv[2], argv[3]);
    return 0;
}
