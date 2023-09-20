/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:12:12 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/20 06:32:20 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string const name ) : ClapTrap( name + "_clap_name") {
    std::cout << "DiamondTrap Parametrise Constructor is called" << std::endl;
    this->Name = name;
    this->Health = 100;
    this->Energy = 50;
    this->Attack_dmg = 30;
}

DiamondTrap::DiamondTrap( void ) {
    std::cout << "DiamondTrap Default Constructor is called" << std::endl;
    ClapTrap::Name += "_clap_name";
    this->Name = "Default";
    this->Health = 100;
    this->Energy = 50;
    this->Attack_dmg = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap const &obj ) {
    std::cout << "DiamondTrap Copy Constructor is called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &obj ) {
    if (this != &obj){
        ClapTrap::Name = obj.ClapTrap::getName();
        this->Name = obj.getName();
        this->Health = obj.getHealth();
        this->Energy = obj.getEnergy();
        this->Attack_dmg = obj.getAttack_dmg();
    }
    return *this;
}

DiamondTrap::~DiamondTrap( void ){
    std::cout << "DiamondTrap Destructor is called" << std::endl;
}

void DiamondTrap::whoAmI( void ) {
    std::cout << "Hello my name is " << this->Name << " but everybody calls me " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack( std::string const target ){
    ScavTrap::attack(target);
}

void DiamondTrap::setName( std::string const name ) {
    this->Name = name;
}

std::string DiamondTrap::getName( void ) const {
    return this->Name;
}
