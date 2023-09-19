/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:38:15 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/19 22:48:58 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->Health = 100;
    this->Energy = 100;
    this->Attack_dmg = 30;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name){
    std::cout << "FragTrap Parametric constructor called" << std::endl;
    this->Health = 100;
    this->Energy = 100;
    this->Attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src){
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj){
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &obj){
        this->Health = obj.getHealth();
        this->Energy = obj.getEnergy();
        this->Attack_dmg = obj.getAttack_dmg();
    }
    return (*this);
}

void FragTrap::highFivesGuys(void){
    std::cout << this->Name << " high fives guys" << std::endl;
}

void FragTrap::attack(std::string const &target){
    std::cout << this->Name << " attack " << target << ", causing " << this->Attack_dmg << " points of damage!!!" << std::endl;
}

