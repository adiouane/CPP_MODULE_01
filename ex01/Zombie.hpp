/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:39:43 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/11 02:30:55 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void    set_name(std::string n);
        std::string    get_name(std::string name);
        Zombie(void);
        ~Zombie(void);
        void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif