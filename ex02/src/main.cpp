/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:03:14 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/20 06:23:14 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

int main( void ){
    
    FragTrap frag("Frag");

    frag.attack("target");
    std::cout << frag.getName() << " Health befor get attacked is: " << frag.getHealth() << std::endl;
    frag.takeDamage(20);
    std::cout << frag.getName() << " Health after getting attacked is: " << frag.getHealth() << std::endl;
    frag.beRepaired(10);
    std::cout << frag.getName() << " Health after being repaired is: " << frag.getHealth() << std::endl;
    frag.highFivesGuys();

    return 0;
}
