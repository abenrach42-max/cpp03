/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 08:48:02 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/05 13:01:12 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default constructor FragTrap called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
}

FragTrap    &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "Copy assignement FragTrap called" << std::endl;
    this->hit_point = src.hit_point;
    this->energy_point = src.energy_point;
    this->name = src.name;
    this->attack_damage = src.attack_damage;
    return (*this);
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src.name)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = src;
}

void    FragTrap::highFives(void)
{
    std::cout << "Give me a high-fives !!!!!!" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap called" << std::endl;
}