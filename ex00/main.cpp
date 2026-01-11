/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:19:30 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/11 18:47:20 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap m("Michael");
	ClapTrap j("Jacob");

	m.attack(j.getName());
	j.takeDemage(7);
	j.beRepaired(8);

	m.attack(j.getName());
	j.takeDemage(7);
	j.beRepaired(8);
	std::cout << j.getHitPoint() << " | m hit points: " << m.getEnergyPoint() << " | m hit points: " << j.getEnergyPoint() << "\n";
}