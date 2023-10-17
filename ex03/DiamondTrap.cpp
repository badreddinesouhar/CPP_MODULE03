/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:39:44 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 23:55:57 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap constructor called." << std::endl;
    this->_name = name;
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoint = ScavTrap::energyPoint;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy) ,  ScavTrap(copy) , FragTrap(copy) {
    std::cout << "DiamondTrap copy constructor has been called" << std::endl;
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamndtrap) {
    if (this == &diamndtrap)
        return *this;
    std::cout << "DiamondTrap assignation operator has been called" << std::endl;
    this->_name = diamndtrap._name;
    this->hitPoint = diamndtrap.hitPoint;
    this->energyPoint = diamndtrap.energyPoint;
    this->attackDamage = diamndtrap.attackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Diamondtrap deconstructo has been called" << std::endl;
}

void DiamondTrap::attack(std::string target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamndTrap name is " << _name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}