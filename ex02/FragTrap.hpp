/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 00:16:34 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 01:05:25 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap {
    private:
    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( const FragTrap& other);
        FragTrap &operator=( const FragTrap& other);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif