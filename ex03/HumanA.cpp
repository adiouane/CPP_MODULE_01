/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:44:42 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 17:28:30 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(void){}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
