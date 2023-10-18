/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:55:04 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 22:22:00 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "Default ScavTrap constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Deconstructor has been called for " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap constructor has beeeeeeeen called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor has beeeeeeeen called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& scavtrap) {
    if (this == &scavtrap)
        return (*this);
    std::cout << "ScavTrap assignation operator has beeeeeeeen called" << std::endl;
    this->hitPoint = scavtrap.hitPoint;
    this->energyPoint = scavtrap.energyPoint;
    this->attackDamage = scavtrap.attackDamage;
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoint == 0 || energyPoint == 0) {
        std::cout << "ScavTrap " << _name << " can't attack " << target << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << attackDamage << " of damage!" << std::endl;
    energyPoint--;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
