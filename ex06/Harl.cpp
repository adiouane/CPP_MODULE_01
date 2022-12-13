/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:39:04 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/11 18:22:05 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){

}

Harl::~Harl(void){}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
    std::cout << "" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << "" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (int j = 0; j < 4; j++)
    {
       if (level == levels[j])
        {
            i = j;
            break;
        }
    }
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        exit(1);
    }
    switch(i)
    {
        case 0:
            Harl::debug();
        case 1:
            Harl::info();
        case 2:
            Harl::warning();
        case 3:
            Harl::error();
    }
}