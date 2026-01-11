/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:57:47 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/11 02:06:34 by majkijew         ###   ########.fr       */
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
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		void setName(std::string name);
		void setHitPoint(int hitPoint);
		void setEnergyPoint(int energyPoint);
		void setDemage(int demage);
		std::string getName( void ) const ;
		int getHitPoint( void ) const ;
		int getEnergyPoint( void ) const ;
		int getDemage( void ) const ;

		void attack(const std::string &target);
		void takeDemage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

