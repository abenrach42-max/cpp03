/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:26:23 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/05 08:45:16 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    a("caca");
    ClapTrap    b("pipi");
    
    a.attack("pipi");
    b.attack("caca");
    a.guardGate();
    return (0);
}