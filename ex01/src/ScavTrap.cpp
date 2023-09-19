/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:52:47 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/19 02:45:29 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->Health = 100;
    this->Energy = 50;
    this->Attack_dmg = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    std::cout << "ScavTrap Parametric constructor called" << std::endl;
    this->Health = 100;
    this->Energy = 50;
    this->Attack_dmg = 20;
}

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap(src) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const &obj ) {
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->Health = obj.getHealth();
        this->Energy = obj.getEnergy();
        this->Attack_dmg = obj.getAttack_dmg();
    }
    return (*this);
}

void    ScavTrap::attack( std::string const &target ) {
    std::cout << this->Name << " attack " << target << ", causing " << this->Attack_dmg << " points of damage!" << std::endl;
}

void   ScavTrap::guardGate( void ) {
    std::cout << this->Name << " has enterred in Gate keeper mode" << std::endl;
}
