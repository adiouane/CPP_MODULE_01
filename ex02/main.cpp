/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:59:59 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/13 03:31:06 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
    std::string Str = "HI THIS IS BRAIN";
    std::string *stringPTR = &Str;
    std::string &stringREF = Str;

    std::cout << "The memory address of the string variable = "<< &Str << std::endl;
    std::cout << "The memory address of the string variable = "<< &stringPTR << std::endl;
    std::cout << "The memory address of the string variable = "<< &stringREF << std::endl;
    
    std::cout << "The value of the string variable = "<< Str << std::endl;
    std::cout << "The value pointed to by stringPTR = "<< *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF = "<< stringREF << std::endl;   
}
