/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:57:47 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/10 20:18:25 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hitPoint;
		int _energyPoint;
		int _demage;
	public:
		ClapTrap() : _name(""), _hitPoint(10), _energyPoint(10), _demage(0) {};
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string &target);
		void takeDemage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

