/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:39:47 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/11 02:37:49 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void    Zombie::set_name(std::string n)
{
    this->name = n;
}

std::string    get_Name(std::string name)
{
    return (name);
}

Zombie::Zombie(void)
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << name <<  " destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
