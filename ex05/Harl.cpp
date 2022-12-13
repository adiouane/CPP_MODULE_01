/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:39:04 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 17:50:33 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void)
{
    std::cout << "DEBUG" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING" << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr_mf[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (void)(this->*ptr_mf[i])();
    }
}
