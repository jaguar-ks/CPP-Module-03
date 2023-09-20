/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 04:45:05 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/20 06:26:10 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string Name;
    public:
        DiamondTrap( void );
        DiamondTrap( DiamondTrap const &obj );
        DiamondTrap( std::string const name );
        DiamondTrap &operator=( DiamondTrap const &obj );
        ~DiamondTrap( void );
        void whoAmI( void );
        void attack( std::string const target );
        void setName( std::string const name );
        std::string getName( void ) const;
};

