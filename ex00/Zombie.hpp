/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:37:53 by adiouane          #+#    #+#             */
/*   Updated: 2022/10/18 17:47:39 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        void    set_name(std::string name);
        std::string    get_name(std::string name);
        Zombie(void);
        ~Zombie(void);
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif