/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:11:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/17 20:47:34 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
  private:
    std::string _name;
    unsigned int hitPoint;
    unsigned int energyPoint;
    unsigned int attackDamage;
  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& copy);
    bool operator!=(const ClapTrap& ClapTrap);
    ClapTrap& operator = (const ClapTrap& ClapTrap);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};


#endif