/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:52:18 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/17 03:04:35 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>
#include<iostream>

class ClapTrap {
    private:
        std::string Name;
        int  Health;
        int  Energy;
        int  Attack_dmg;
    public:
        ClapTrap( void );
        ClapTrap( std::string name );
        ~ClapTrap( void );
        ClapTrap( ClapTrap const &obj );
        ClapTrap &operator=( ClapTrap const &obj );
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName( void ) const;
        int getHealth( void ) const;
        int getEnergy( void ) const;
        int getAttack_dmg( void ) const;
        void setName( std::string name );
        void setHealth( int health );
        void setEnergy( int energy );
        void setAttack_dmg( int attack_dmg );
};
