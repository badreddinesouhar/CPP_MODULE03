/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:11:21 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/13 12:58:37 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Badr");
	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Badr-clone");
	b.beRepaired(3);
	
	ScavTrap c;
	ScavTrap d("Savage");
	c.attack("CloneTrap");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Savage-clone");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("ScavTrap-clone");
	return (0);
}