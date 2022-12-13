/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:39:47 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 17:52:21 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon(void)
{
}

/*
    getType returns the type of the weapon (const means that the function does not modify the object)
    weapen type is a private member of the class which is a string so we return a const reference to it
*/
const std::string &Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
