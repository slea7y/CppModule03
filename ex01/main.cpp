/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:19:30 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/12 00:11:03 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap m("Michael");
	ClapTrap j("Jacob");
	ScavTrap s("Slay");

	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	j.attack(s.getName());
	s.attack(j.getName());
	j.takeDemage(7);
	m.attack(j.getName());
	j.takeDemage(3);

	// j.attack(m.getName());
	// j.takeDemage(7);
	j.beRepaired(8);

	// m.attack(j.getName());
	// j.takeDemage(7);
	// j.beRepaired(8);
	// m.attack(s.getName());
	// s.takeDemage(2);
	// s.beRepaired(2);
	std::cout << s.getEnergyPoint() << " | m hit points: " << m.getEnergyPoint() << " j demage:  " << j.getHitPoint() << "\n";
}