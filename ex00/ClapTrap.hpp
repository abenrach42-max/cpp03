/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:14:04 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/03 18:50:56 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class   ClapTrap
{
    private:
        std::string     name;
        unsigned int    hit_point;
        unsigned int    energy_point;
        unsigned int    attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ClapTrap    &operator=(const ClapTrap &src);
        void        attack(const std::string &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        ~ClapTrap(void);
};

#endif