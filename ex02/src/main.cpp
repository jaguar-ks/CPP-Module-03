/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:03:14 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/19 22:55:07 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

int main( void ){
    
    FragTrap frag("Frag");
    ClapTrap clap("Claw");
    ScavTrap scav("Scav");

    clap.attack("target");
    std::cout << clap.getName() << " Health is : " << clap.getHealth() << std::endl;
    clap.takeDamage(20);
    std::cout << clap.getName() << " Health is : " << clap.getHealth() << std::endl;
    clap.beRepaired(10);
    std::cout << clap.getName() << " Health is : " << clap.getHealth() << std::endl;
    scav.attack("target");
    scav.takeDamage(20);
    std::cout << scav.getName() << " Health is : " << scav.getHealth() << std::endl;
    scav.beRepaired(10);
    std::cout << scav.getName() << " Health is : " << scav.getHealth() << std::endl;
    scav.guardGate();
    std::cout << scav.getName() << " Health is : " << scav.getHealth() << std::endl;
    frag.attack("target");
    std::cout << frag.getName() << " Health is : " << frag.getHealth() << std::endl;
    frag.takeDamage(20);
    std::cout << frag.getName() << " Health is : " << frag.getHealth() << std::endl;
    frag.beRepaired(10);
    std::cout << frag.getName() << " Health is : " << frag.getHealth() << std::endl;
    frag.highFivesGuys();

    return 0;
}
