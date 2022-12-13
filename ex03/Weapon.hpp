/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:39:43 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 04:24:33 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string &getType(void) const;
        void setType(std::string type);
};


#endif