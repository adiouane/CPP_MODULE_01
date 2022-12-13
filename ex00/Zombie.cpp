/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:37:59 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/11 02:39:56 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << name <<  " destroyed" << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

std::string    get_Name(std::string name)
{
    return (name);
}

void Zombie::announce(void)
{
    std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}
