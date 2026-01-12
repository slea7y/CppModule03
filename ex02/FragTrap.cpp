/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 00:53:50 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 01:12:05 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap( std::string name ) {
    this->setName(name);
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setDemage(30);
}

FragTrap::FragTrap( const FragTrap& other) {
    
}

FragTrap &FragTrap::operator=( const FragTrap& other) {

}

FragTrap::~FragTrap() {}

void FragTrap::highFivesGuys(void) {
    std::cout << "[" << this->getName() << " requests a HIGH-FIVE]\n";
}