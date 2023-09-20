/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:02:29 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/20 06:00:32 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ~ScavTrap( void );
        ScavTrap( ScavTrap const &obj );
        ScavTrap &operator=( ScavTrap const &obj );
        void attack(std::string const & target);
        void guardGate();
};

