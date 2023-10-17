/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:55:08 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 23:31:06 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

 public:
    ScavTrap();
    ScavTrap(const ScavTrap& copy);
    ScavTrap(std::string name);
    ScavTrap& operator= (const ScavTrap& scavtrap);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif
