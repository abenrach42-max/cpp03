/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:14:00 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/05 07:57:38 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    *this = src;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignement operator ClapTrap called" << std::endl;
    if (this != &src)
    {
        this->hit_point = src.hit_point;
        this->attack_damage = src.attack_damage;
        this->energy_point = src.energy_point;
        this->name = src.name;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->hit_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " no PV point" << std::endl;
        return ;
    }
    else if (this->energy_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " no PM point" << std::endl;
        return ;
    }
    this->energy_point--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point <= amount)
        this->hit_point = 0;
    else
        this->hit_point -= amount;
    std::cout << "ClapTrap " << this->name << " took " << amount << " damage\n" << "Remaining : " << this->hit_point << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " can't repair because he has no PM" << std::endl;
        return ;
    }
    else if (this->hit_point <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead ! (0 PV)" << std::endl;
        return ;
    }
    this->energy_point--;
    this->hit_point += amount;
    std::cout << "ClapTrap " << this->name << " healed for " << amount << " PV\n" << "Now he has : " << this->hit_point << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}