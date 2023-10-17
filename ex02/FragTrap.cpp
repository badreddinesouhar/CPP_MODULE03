/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:59:44 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 23:26:47 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Default FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "Default FragTrap has been called" << std::endl;
}

void FragTrap::highFiveGuys(void) {
    std::cout << "FragTrap " << _name << " high five guys" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Deconstructor is called" << std::endl;
}