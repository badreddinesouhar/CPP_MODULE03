/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:11:21 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/13 13:03:30 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	{
		ClapTrap a;
		ClapTrap b("Cody");
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
	}
	{
		ScavTrap a;
		ScavTrap b("Savage");
		a.attack("CloneTrap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		b.attack("Savage-clone");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("ScavTrap-clone");
	}
	{
		FragTrap a;
		FragTrap b("Chadd");
		a.highFiveGuys();
		a.attack("some random dude");
		a.takeDamage(101);
		a.takeDamage(1);
		a.attack("some random dude");
		b.highFiveGuys();
	}
	{
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
	}
	return (0);
}