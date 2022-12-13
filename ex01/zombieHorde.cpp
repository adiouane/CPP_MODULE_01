/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:39:38 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/11 18:30:40 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N <= 0)
    {
        std::cout << "N must be greater than 0" << std::endl;
        exit(0);
    }
    Zombie *zombieHorde = new Zombie[N];
    while (N--)
        zombieHorde[N].set_name(name);
    return zombieHorde;
} 
