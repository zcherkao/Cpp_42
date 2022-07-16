/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:26:40 by aelousse          #+#    #+#             */
/*   Updated: 2022/07/05 16:26:42 by aelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string name;
public:
    Zombie();
    ~Zombie();
    void    setName(std::string arg);
    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomchump(std::string name);

#endif