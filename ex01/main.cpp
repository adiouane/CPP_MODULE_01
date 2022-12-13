/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:39:50 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/12 22:55:12 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    int i  = 5;
    Zombie *zombie = NULL;
    zombie = zombieHorde(i, "foo");
    while (i--)
        zombie->announce();
    delete [] zombie;
}
