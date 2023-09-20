/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:12:02 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/20 06:00:53 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap( void );
        FragTrap( std::string const name );
        FragTrap( FragTrap const &obj );
        ~FragTrap( void );
        FragTrap &operator=( FragTrap const &obj );
        void highFivesGuys( void );
        void attack( std::string const &target );
};
