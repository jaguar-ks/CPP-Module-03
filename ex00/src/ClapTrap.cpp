/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:52:21 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/17 03:47:48 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->Name = "Default";
    this->Health = 10;
    this->Energy = 10;
    this->Attack_dmg = 0;
}

ClapTrap::ClapTrap( std::string name ) {
    std::cout << "ClapTrap Parametric constructor called" << std::endl;
    this->Name = name;
    this->Health = 10;
    this->Energy = 10;
    this->Attack_dmg = 0;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &obj ) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = obj;
}

void ClapTrap::setName( std::string name ) {
    this->Name = name;
}

void ClapTrap::setHealth( int health ) {
    this->Health = health;
}

void ClapTrap::setEnergy( int energy ) {
    this->Energy = energy;
}

void ClapTrap::setAttack_dmg( int attack_dmg ) {
    this->Attack_dmg = attack_dmg;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &obj ) {
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->Name = obj.getName();
    this->Health = obj.getHealth();
    this->Energy = obj.getEnergy();
    this->Attack_dmg = obj.getAttack_dmg();
    return *this;
}

std::string ClapTrap::getName( void ) const {
    return this->Name;
}

int ClapTrap::getHealth( void ) const {
    return this->Health;
}

int ClapTrap::getEnergy( void ) const {
    return this->Energy;
}

int ClapTrap::getAttack_dmg( void ) const {
    return this->Attack_dmg;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->Attack_dmg << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
    this->Health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->Name << " be repaired " << amount << " points of damage!" << std::endl;
    this->Health += amount;
}

