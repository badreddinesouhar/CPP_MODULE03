/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:11:18 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/13 13:00:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

}

ClapTrap::ClapTrap(std::string name) : _name(name) , hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), hitPoint(copy.hitPoint) , energyPoint(copy.energyPoint), attackDamage(copy.attackDamage) {
    std::cout << "copy constructor has been called" << std::endl;
}

bool ClapTrap::operator!=(const ClapTrap& ClapTrap) {
    if ((this->_name == ClapTrap._name) && (this->hitPoint == ClapTrap.hitPoint) && (this->attackDamage == ClapTrap.attackDamage) && (this->energyPoint == ClapTrap.energyPoint))
        return false;
    return true;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap) {
    if (*this != ClapTrap) {
        _name = ClapTrap._name;
        hitPoint = ClapTrap.hitPoint;
        energyPoint = ClapTrap.energyPoint;
        attackDamage = ClapTrap.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "deconstuctor has been called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoint == 0 || energyPoint == 0) {
        std::cout << "ClapTrap " << _name << " can't attack " << target << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << attackDamage << " of damage!" << std::endl;
    energyPoint--;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoint == 0 || energyPoint == 0) {
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " gained " << amount << " of energy back" << std::endl;
    hitPoint += amount;
    energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoint == 0 || energyPoint == 0) {
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " took " << amount << " of damage" << std::endl;
    hitPoint += amount;
}

