/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfontana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:50:08 by cfontana          #+#    #+#             */
/*   Updated: 2018/07/06 09:57:45 by cfontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    sastantua(int size);
void    ft_putchar(char c);

int main(int ac, char **av)
{
  sastantua(atoi(av[1]));
	return(0);
}
