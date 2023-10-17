/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:59:44 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 22:46:52 by bsouhar          ###   ########.fr       */
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

