/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 20:52:51 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 00:03:44 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ScavTrap::ScavTrap( void ) : {}

ScavTrap::ScavTrap(std::string name) {
    this->setName(name);
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setDemage(20);
    std::cout << "ScavTrap parameterized constructor called\n";
}

// "ClapTrap default constructor called\n";
// std::cout << "ClapTrap parameterized constructor called\n";
// std::cout << "ClapTrap copy constructor called\n";
// std::cout << "Assignment operator called\n";
// std::cout << "ClapTrap destructor\n";

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor\n";
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode.";
}

void ScavTrap::attack(const std::string& target) {
    if (this->getEnergyPoint() <= 0 || this->getHitPoint() <= 0) {
        std::cout << this->getName() << "tries to attack but he doesnt have any energy or hit points... relax a bit\n";
        return ;
    }
    std::cout << "hit poits amount: " << this->getName() << " " << this->getHitPoint() <<"\n";
    std::cout << "ScavTrap " << this->getName() << " attacks " << target;
    this->setEnergyPoint(this->getEnergyPoint() - 1);
}
