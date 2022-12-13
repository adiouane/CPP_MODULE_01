/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:38:21 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 00:48:24 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
        std::cout << "Error: Usage: ./harlFilter [debug|info|warning|error]" << std::endl;
    if (argc == 2) 
        harl.complain(argv[1]);
    return (0);
}
