/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:11:21 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 20:52:21 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap ClapTrap("badr");
    
    ClapTrap.attack("anass");
    ClapTrap.takeDamage(10);
    ClapTrap.attack("hacker");
    ClapTrap.beRepaired(5);
    ClapTrap.attack("ayoub");
}