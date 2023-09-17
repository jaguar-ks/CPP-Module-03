/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:52:12 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/17 03:46:08 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("Clap");

    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << clap.getName() << " Health is :" << clap.getHealth() << std::endl;

    return (0);
}
