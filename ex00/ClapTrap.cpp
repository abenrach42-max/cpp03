/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:14:00 by abenrach          #+#    #+#             */
/*   Updated: 2026/08/31 12:38:33 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), pv(10), pm(10), damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &src)
    {
        this->pv = src.pv;
        this->damage = src.damage;
        this->pm = src.pm;
        this->name = src.name;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}