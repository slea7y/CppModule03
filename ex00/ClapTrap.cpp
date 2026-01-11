/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:56:44 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/11 02:13:54 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoint(10), _energyPoint(10), _demage(0) {
    std::cout << "Default constructor called\n";
};

ClapTrap::ClapTrap(std::string name) {
    _name = name;
    std::cout << "Parameterized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
    _name = obj._name;
    std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other)
    {
        _name = other._name;
        _hitPoint = other._hitPoint;
        _energyPoint = other._energyPoint;
        _demage = other._demage;
    }
    std::cout << "Assignment operator called\n";
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor\n";
}

void ClapTrap::setName(std::string name) {
    _name = name;
}

void ClapTrap::setHitPoint(int hitPoint) {
    _hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(int energyPoint) {
    _energyPoint = energyPoint;
}

void ClapTrap::setDemage(int demage) {
    _demage = demage;
}

std::string ClapTrap::getName( void ) const {
    return (_name);
}

int ClapTrap::getHitPoint( void ) const {
    return (_hitPoint);
}

int ClapTrap::getEnergyPoint( void ) const {
    return (_energyPoint);
}

int ClapTrap::getDemage( void ) const {
    return (_demage);
}

void ClapTrap::attack(const std::string &target) {
    
}

void ClapTrap::takeDemage(unsigned int amount) {

}

void ClapTrap::beRepaired(unsigned int amount) {
    
}
