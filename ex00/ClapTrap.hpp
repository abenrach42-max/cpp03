/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:14:04 by abenrach          #+#    #+#             */
/*   Updated: 2026/08/31 12:34:16 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class   ClapTrap
{
    private:
        std::string name;
        int         pv;
        int         pm;
        int         damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ClapTrap    &operator=(const ClapTrap &src);
        ~ClapTrap(void);
};

#endif