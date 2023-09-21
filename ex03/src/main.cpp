/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:03:14 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/21 05:21:37 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

int main( void ){
    
    DiamondTrap dmd;
    dmd.attack("Target");
    std::cout << dmd.getName() << " health befor being attcked is: " << dmd.getHealth() << std::endl;
    dmd.takeDamage(50);
    std::cout << dmd.getName() << " health after being attcked is: " << dmd.getHealth() << std::endl;
    dmd.beRepaired(20);
    std::cout << dmd.getName() << " health after being repaired is: " << dmd.getHealth() << std::endl;
    dmd.whoAmI();

    return 0;
}
