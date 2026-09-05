/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 07:36:53 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/05 08:44:44 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "Copy assignement ScavTrap called" << std::endl;
    this->hit_point = src.hit_point;
    this->energy_point = src.energy_point;
    this->name = src.name;
    this->attack_damage = src.attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src.name)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = src;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->hit_point <= 0)
    {
        std::cout << "ScavTrap " << this->name << " no PV point" << std::endl;
        return ;
    }
    else if (this->energy_point <= 0)
    {
        std::cout << "ScavTrap " << this->name << " no PM point" << std::endl;
        return ;
    }
    this->energy_point--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}
