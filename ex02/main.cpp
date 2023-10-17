/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:11:21 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 21:56:04 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scavTrap("ScavTrap");

    scavTrap.attack("target");
    scavTrap.guardGate();
    return (0);
}