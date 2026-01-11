/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:56:44 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/11 18:45:04 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoint(10), _energyPoint(10), _demage(0) {
    std::cout << "Default constructor called\n";
};

ClapTrap::ClapTrap(std::string name) : _hitPoint(10), _energyPoint(10), _demage(0) {
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

void ClapTrap::attack(const std::string& target) {
    if (this->getEnergyPoint() <= 0 || this->getHitPoint() <= 0) {
        std::cout << this->getName() << "tries to attack but he doesnt have any energy or hit points... relax a bit\n";
        return ;
    }
    std::cout << "hit poits amount: " << this->getName() << " " << this->getHitPoint() <<"\n";
    std::cout << "ClapTrap " << this->getName() << " attacks " << target;
    this->setEnergyPoint(this->getEnergyPoint() - 1);
}

void ClapTrap::takeDemage(unsigned int amount) {
    this->setDemage(this->getDemage() - amount);
    this->setHitPoint(this->getHitPoint() - amount);
    std::cout << ", causing " << amount << " points of damage!\n";
    std::cout << this->getName() << ": AAAAA it hurts me!!!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->getEnergyPoint() <= 0){
        std::cout << this->getName() << "tries to get repaired but hes to weak :'(\n";
        return ;
    }
    std::cout << "[" << this->getName() << " gets repaired]\n" ;
    std::cout << this->getName() <<": I suddenly feel so good... like " << amount << " point more good\n";
    this->setHitPoint(this->getHitPoint() + amount);
    this->setEnergyPoint(this->getEnergyPoint() - 1);
}
